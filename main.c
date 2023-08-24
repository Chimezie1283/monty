#include "monty.h"
#define  _GNU_SOURCE
#define  _POSIX_C_SOURCE 200809L

beast_t beast = {NULL, NULL, NULL, 0};
/**
* main - The monty code interpreter
* @argc: The number of arguments
* @argv: The monty file location
* Return: Return 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int kounta = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	beast.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		beast.content = content;
		kounta++;
		if (read_line > 0)
		{
			execute(content, &stack, kounta, file);
		}
		free(content);
	}
	f_stack(stack);
	fclose(file);
return (0);
}
