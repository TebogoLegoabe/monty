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
	if (ptr == NULL)
		return;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
