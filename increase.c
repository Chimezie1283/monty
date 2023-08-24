#include "monty.h"

/**
 * chi_mul - This multiplies the top two elements of the stack.
 * @head: This is the stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_mul(stack_t **head, unsigned int kounta)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auth = h->next->n * h->n;
	h->next->n = auth;
	*head = h->next;
	free(h);
}
