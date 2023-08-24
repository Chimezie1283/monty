#include "monty.h"

/**
 * chi_pall - This prints the stack
 * @head: The stack head
 * @kounta: This is not used
 * Return: nothing to return
*/
void chi_pall(stack_t **head, unsigned int kounta)
{
	stack_t *h;
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
