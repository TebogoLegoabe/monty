#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @head: stack head
 * @count: counter
 * Return: no return
*/
void add(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, ptr;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(output.file);
		free(output.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ptr = h->n + h->next->n;
	h->next->n = ptr;
	*head = h->next;
	free(h);
}
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new value
 * Return: void
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ptr)
		ptr->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
