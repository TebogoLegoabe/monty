#include "monty.h"

/**
* execute - executes the opcode
* @stack: head
* @count: counter
* @file: poiner to monty file
* @content: command line
* Return: void
*/
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
	{OP_PUSH, push}, {OP_PALL, pall}, {OP_PINT, pint},
	{OP_POP, pop}, {OP_SWAP, swap}, {OP_ADD, add},
	{OP_NOP, nop}, {OP_SUB, sub}, {OP_DIV, divide},
	{OP_MUL, mul}, {OP_MOD, mod}, {OP_PCHAR, _char},
	{OP_PSTR, _str}, {OP_ROTL, rot_top}, {OP_ROTR, rot_btm},
	{OP_QUEUE, queue}, {OP_STACK, _stack},
	{NULL, NULL}
};
	unsigned int i = 0;
	char *ptr;

	ptr = strtok(content, " \n\t");
	if (ptr && ptr[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode != NULL && ptr != NULL)
	{
		if (!strcmp(ptr, opst[i].opcode))
	{
		opst[i].f(stack, count);
		return 0;
	}
	i++;
	}

	if (ptr && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, ptr);
		fclose(file);
		free(content);
		_free(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
