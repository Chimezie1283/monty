#include "monty.h"

/**
 * chi_change - This adds the top two elements of the stack.
 * @head: The stack head
 * @kounta: The line_number
 * Return: no return
*/
void chi_change(state_t **head, unsigned int kounta)
{
	state_t *h;
	int lent = 0, auth;

	h = *head;
	while (h)
	{
		h = h->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auth = h->n;
	h->n = h->next->n;
	h->next->n = auth;
}
