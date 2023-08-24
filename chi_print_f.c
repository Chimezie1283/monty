#include "monty.h"

/**
 * chi_pint - This prints the top
 * @head: The stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_pint(stack_t **head, unsigned int kounta)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
