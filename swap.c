#include "monty.h"

/**
 * swap - swaps the top two elements
 * of the stack
 * @head: top of the stack
 * @number: counter
 * Return: void
*/
void swap(stack_t **head, unsigned int number)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", number);
		fclose(output.file);
		free(output.character);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ptr = h->n;
	h->n = h->next->n;
	h->next->n = ptr;
}
