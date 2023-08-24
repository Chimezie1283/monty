#include "monty.h"

/**
 * chi_add - This adds the top two elements of the stack.
 * @head: The stack head
 * @Kounta: The line number
 * Return: nothing to return
*/
void chi_sum(state_t **head, unsigned int kounta)
{
	state_t *j;
	int lent = 0, auth;

	j = *head;
	while (j)
	{
		j = j->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	auth = j->n + j->next->n;
	j->next->n = auth;
	*head = j->next;
	free(j);
}
