#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, or EXIT_FAILURE if an error occurs
 */
int main(int argc, char *argv[])
{
	char content[MAX_LINE_LENGTH];
	FILE *file;
	size_t len;
	stack_t *stack = NULL;
	unsigned int count = 0;

	/* Check if the program is called with the correct number of arguments */
	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}

	/* Open the file specified in the command-line argument */
	file = fopen(argv[1], "r");
	bus.file = file;

	if (!file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	while (fgets(content, MAX_LINE_LENGTH, file) != NULL)
	{
	count++;

	len = strlen(content);

	if (len > 0 && content[len - 1] == '\n')
		content[len - 1] = '\0';

	bus.content = content;
	execute(content, &stack, count, file);
	}
	_free(stack);
	fclose(file);
	return (0);
}
