#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @head: stack head
 * @count: counter
 * Return: void
*/
void pop(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(output.file);
		free(output.character);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
/**
 * pint -  prints the value at the top of the stack, followed by a new line
 * @head: stack head
 * @count: counter
 * Return: void
*/
void pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(output.file);
		free(output.character);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
