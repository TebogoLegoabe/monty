#include "monty.h"

/**
 * _stack - sets the format of the data to a stack (LIFO)
 * @head: stack head
 * @count: counter
 * Return: void
*/
void _stack(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.num = 0;
}
/**
 * _str - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: counter
 * Return: void
*/
void _str(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
