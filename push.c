#include "monty.h"

/**
 * push - add node to the stack
 * @top: top of the stack
 * @index: counter
 * Return: void
*/
void push(stack_t **top, unsigned int index)
{
	int i, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		j = 0;
		while (bus.arg[j] != '\0')
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
			{
				flag = 1;
				break;
			}
			j++;
		}

		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", index);
			fclose(bus.file);
			free(bus.content);
			_free(*top);
			exit(EXIT_FAILURE); }}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", index);
		fclose(bus.file);
		free(bus.content);
		_free(*top);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.num == 0)
		addnode(top, i);
	else
	addqueue(top, i);
}
