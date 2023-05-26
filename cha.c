#include "monty.h"

/**
 * _char - prints the char at the top of the stack,followed by a new line
 * @head: stack head
 * @count: counter
 * Return: void
*/
void _char(stack_t **head, unsigned int count)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(output.file);
		free(output.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(output.file);
		free(output.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
