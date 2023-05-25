#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @count: counter
 * Return: void
*/
void mul(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, node;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	node = h->next->n * h->n;
	h->next->n = node;
	*head = h->next;
	free(h);
}
