#include "monty.h"

/**
 * chi_push_f - This adds node to the stack
 * @head: stack head
 * @kounta: The line_number
 * Return: no return
*/
void chi_push_f(state_t **head, unsigned int kounta)
{
	int n, j = 0, flag = 0;

	if (beast.arg)
	{
		if (beast.arg[0] == '-')
			j++;
		for (; beast.arg[j] != '\0'; j++)
		{
			if (beast.arg[j] > 57 || beast.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push_f integer\n", kounta);
			fclose(beast.file);
			free(beast.content);
			f_state(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push_f integer\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE); }
	n = atoi(beast.arg);
	if (beast.lifi == 0)
		chi_sum_node(head, n);
	else
		chi_sum_que(head, n);
}
