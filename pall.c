#include "monty.h"

/**
 * pall -  prints all the values on the stack,
 * starting from the top of the stack
 * @head: stack head
 * @count: counter
 * Return: void
*/
void pall(stack_t **head, unsigned int count)
{
	stack_t *ptr;
	(void)count;
	ptr = *head;

	for (; ptr != NULL; ptr = ptr->next)
	{
	printf("%d\n", ptr->n);
	}
}
