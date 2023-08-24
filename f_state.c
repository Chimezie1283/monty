#include "monty.h"

/**
* f_stack - This frees a doubly linked list
* @head: The head of the stack
*/
void f_stack(stack_t *head)
{
	stack_t *auth;

	auth = head;
	while (head)
	{
		auth = head->next;
		free(head);
		head = auth;
	}
}
