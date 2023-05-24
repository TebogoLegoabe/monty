#include "monty.h"

void monty_push(stack_t **stack, unsigned int line_number);
void monty_pall(stack_t **stack, unsigned int line_number);

/**
 * monty_push - it pushes a value to a stack_t
 * @stack: A pointer to the top mode node
 * @line_number: current working number_line
 *
 * Return: EXIT_FAILURE
 */
void monty_push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *exten;
	int i;

	exten = malloc(sizeof(stack_t));
	if (exten == NULL)
	{
		set_op_tok_error(malloc_error());
		exit(EXIT_FAILURE);
	}
	exten->n = atoi(op_toks[1]);

	if (check_mode(*stack) == STACK)
	{
		tmp = (*stack)->next;
		exten->prev = *stack;
		exten->next = tmp;
		if (tmp)
			tmp->prev = exten;
		(*stack)->next = exten;
	}
	else
	{
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		exten->prev = tmp;
		exten->next = NULL;
		tmp->next = exten;
	}

	return (EXIT_FAILURE);
}

/**
 * monty_pall - Prints the values of a stack_t
 * @stack: A pointer to the top mode node of a stack_t
 * @line_number: current working line number
 */
void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}
