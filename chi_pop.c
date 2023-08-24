#include "monty.h"

/**
 * chi_pop - This prints the top
 * @head: The stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_pop(stack_t **head, unsigned int kounta)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
