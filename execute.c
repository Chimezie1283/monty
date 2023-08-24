#include "monty.h"

/**
* execute - This executes the opcode
* @state: The head linked list - stack
* @kounta: The line_counter
* @file: The poiner to monty file
* @content: The line content
* Return: nothing to return
*/
int execute(char *content, state_t **state, unsigned int kounta, FILE *file)
{
	instruction_t opst[] = {
				{"push", chi_push}, {"pall", chi_pall},
				{"print", chi_print},
				{"pop", chi_pop},
				{"swap", chi_swap},
				{"add", chi_add},
				{"nop", chi_nop},
				{"sub", chi_sub},
				{"div", chi_div},
				{"mul", chi_mul},
				{"mod", chi_mod},
				{"pchar", chi_pchar},
				{"pstr", chi_pstr},
				{"rotl", chi_rotl},
				{"rotr", chi_rotr},
				{"queue", chi_queue},
				{"stack", chi_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	beast.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(state, kounta);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", kounta, op);
		fclose(file);
		free(content);
		f_state(*state);
		exit(EXIT_FAILURE); }
	return (1);
}
