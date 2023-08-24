#include "monty.h"

/**
 * chi_increase - This multiplies the top two elements of the stack.
 * @head: This is the stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_increase(state_t **head, unsigned int kounta)
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
		fprintf(stderr, "L%d: can't increase, too short\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auth = h->next->n * h->n;
	h->next->n = auth;
	*head = h->next;
	free(h);
}
