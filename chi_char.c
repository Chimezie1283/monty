#include "monty.h"

/**
 * chi_char - This prints the char at the top of the stack,
 * followed by a new line
 * @head: The stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_char(state_t **head, unsigned int kounta)
{
	state_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't char, state empty\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't char, value out of range\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
