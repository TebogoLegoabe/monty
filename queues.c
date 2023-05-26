#include "monty.h"

/**
 * queue - sets the format of the data to a queue (FIFO)
 * @head: stack head
 * @count: counter
 * Return: void
*/
void queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	output.num = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new value
 * @head: head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ptr->next = new_node;
		new_node->prev = ptr;
	}
}
