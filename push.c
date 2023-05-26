#include "monty.h"

/**
 * push - add node to the stack
 * @top: top of stack
 * @index: line_number
 * Return: void
*/
void push(stack_t **top, unsigned int index)
{
	int n, j = 0, flag = 0;

	if (output.arg)
	{
		if (output.arg[0] == '-')
			j++;
		j = 0;
	while (output.arg[j] != '\0')
	{
    		if (output.arg[j] > 57 || output.arg[j] < 48)
		{
			flag = 1;
			break;
		}
			j++;
	}

		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", index);
			fclose(output.file);
			free(output.content);
			_free(*top);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", index);
		fclose(output.file);
		free(output.content);
		_free(*top);
		exit(EXIT_FAILURE); }
	n = atoi(output.arg);
	if (output.num == 0)
		addnode(top, n);
	else
		addqueue(top, n);
}
