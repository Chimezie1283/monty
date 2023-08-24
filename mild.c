#include "monty.h"

/**
 * chi_mild - This computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @kounta: The line_number
 * Return: nothing to return
*/
void chi_mild(state_t **head, unsigned int kounta)
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
		fprintf(stderr, "L%d: can't mild, too short\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	auth = h->next->n % h->n;
	h->next->n = auth;
	*head = h->next;
	free(h);
}
