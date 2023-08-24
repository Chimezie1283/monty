#include "monty.h"

/**
* free_stack - This frees a doubly linked list
* @head: The head of the stack
*/
void f_state(state_t *head)
{
	state_t *auth;

	auth = head;
	while (head)
	{
		auth = head->next;
		free(head);
		head = auth;
	}
}
