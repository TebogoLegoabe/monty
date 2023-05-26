#include "monty.h"

/**
 * divide - divides the top two elements of the stack.
 * @head: stack head
 * @line_number: counter
 * Return: void
*/
void divide(stack_t **head, unsigned int line_number)
{
	stack_t *ptr;
	int len = 0, i;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	i = ptr->next->n / ptr->n;
	ptr->next->n = i;
	*head = ptr->next;
	free(ptr);
}
