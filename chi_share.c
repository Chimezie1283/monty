#include "monty.h"

/**
 * f_div - This divides the top two elements of the stack.
 * @head: The stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_share(state_t **head, unsigned int kounta)
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
		fprintf(stderr, "L%d: can't divide, too short\n", kounta);
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
	auth = h->next->n / h->n;
	h->next->n = auth;
	*head = h->next;
	free(h);
}
