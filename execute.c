#include "monty.h"

/**
* execute - This executes the opcode
* @stack: The head linked list - stack
* @counter: The line_counter
* @file: The poiner to monty file
* @content: The line content
* Return: nothing to return
*/
int execute(char *content, state_t **state, unsigned int kounta, FILE *file)
{
	instruction_t opst[] = {
				{"push", chi_push_f}, {"pall_f", chi_pall_f},
				{"print_f", chi_print_f},
				{"pop", chi_pop},
				{"change", chi_change},
				{"sum", chi_sum},
				{"p", chi_p},
				{"minus", chi_minus},
				{"share", chi_share},
				{"increase", chi_increase},
				{"mild", chi_mild},
				{"char", chi_char},
				{"string", chi_string},
				{"rotl", chi_rotl},
				{"rotr", chi_rotr},
				{"que", chi_line},
				{"state", chi_free_state},
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
