#include "monty.h"

/**
 * sub -  subtracts the top element of the stack
 * from the second top element of the stack
 * @head: stack head
 * @count: counter
 * Return: void
 */
void sub(stack_t **head, unsigned int count)
{
	stack_t *ptr;
	int temp, nodes;

	ptr = *head;
	for (nodes = 0; ptr != NULL; nodes++)
		ptr = ptr->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(output.file);
		free(output.character);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	temp = ptr->next->n - ptr->n;
	ptr->next->n = temp;
	*head = ptr->next;
	free(ptr);
}
