#include "monty.h"

/**
 * chi_pstr - This prints the string starting at the top of the stack,
 * followed by a new
 * @head: The stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_pstr(stack_t **head, unsigned int kounta)
{
	stack_t *h;
	(void)kounta;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
