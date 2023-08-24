#include "monty.h"

/**
 * chi_pall_f - This prints the stack
 * @head: The stack head
 * @kounta: This is not used
 * Return: nothing to return
*/
void chi_pall_f(state_t **head, unsigned int kounta)
{
	state_t *h;
	(void)kounta;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
