#include "monty.h"

/**
  *chi_rotl- This rotates the stack to the top
  *@head: The stack head
  *@kounta: The line_number
  *Return: no return
 */
void chi_rotl(state_t **head,  __attribute__((unused)) unsigned int kounta)
{
	state_t *tmp = *head, *auth

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auth = (*head)->next;
	auth->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = auth;
}
