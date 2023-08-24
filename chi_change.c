#include "monty.h"

/**
 * chi_swap - This adds the top two elements of the stack.
 * @head: The stack head
 * @kounta: The line_number
 * Return: no return
*/
void chi_swap(stack_t **head, unsigned int kounta)
{
	stack_t *h;
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
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auth = h->n;
	h->n = h->next->n;
	h->next->n = auth;
}
