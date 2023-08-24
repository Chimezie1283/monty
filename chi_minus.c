#include "monty.h"

/**
  *chi_minus- sustration function
  *@head: The stack head
  *@kounta: The line_number
  *Return: no return
 */
void chi_minus(state_t **head, unsigned int kounta)
{
	state_t *auth;
	int sus, nodes;

	auth = *head;
	for (nodes = 0; auth != NULL; nodes++)
		auth = auth->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't minus, state too short\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_state(*head);
		exit(EXIT_FAILURE);
	}
	auth = *head;
	sus = auth->next->n - auth->n;
	auth->next->n = sus;
	*head = auth->next;
	free(auth);
}
