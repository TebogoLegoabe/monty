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

	if (output.arg)
	{
		if (output.arg[0] == '-')
			j++;
		j = 0;
		while (output.arg[j] != '\0')
		{
<<<<<<< HEAD
			if (output.arg[j] > 57 || output.arg[j] < 48)
    			{
=======
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
			{
>>>>>>> 826d99de2894efff04354878155bb06f87021cec
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
			exit(EXIT_FAILURE); }}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", index);
		fclose(output.file);
		free(output.content);
		_free(*top);
		exit(EXIT_FAILURE); }
	i = atoi(output.arg);
	if (output.num == 0)
		addnode(top, i);
	else
	addqueue(top, i);
}
