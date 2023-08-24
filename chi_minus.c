#include "monty.h"

/**
  *chi_sub- sustration function
  *@head: The stack head
  *@kounta: The line_number
  *Return: no return
 */
void chi_sub(stack_t **head, unsigned int kounta)
{
	stack_t *auth;
	int sub, nodes;

	auth = *head;
	for (nodes = 0; auth != NULL; nodes++)
		auth = auth->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	auth = *head;
	sub = auth->next->n - auth->n;
	auth->next->n = sub;
	*head = auth->next;
	free(auth);
}
