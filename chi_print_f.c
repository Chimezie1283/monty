#include "monty.h"

/**
 * chi_print_f - This prints the top
 * @head: The stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_print_f(state_t **head, unsigned int kounta)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't print, state empty\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
