#include "monty.h"

/**
 * chi_push - This adds node to the stack
 * @head: stack head
 * @kounta: The line_number
 * Return: no return
*/
void chi_push(stack_t **head, unsigned int kounta)
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
		{ fprintf(stderr, "L%d: usage: push integer\n", kounta);
			fclose(beast.file);
			free(beast.content);
			f_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(beast.arg);
	if (beast.lifi == 0)
		chi_addnode(head, n);
	else
		chi_addqueue(head, n);
}
