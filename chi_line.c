#include "monty.h"

/**
 * chi_line - This prints the top
 * @head: stack head
 * kounta: The line_number
 * Return: no return
*/
void chi_line(state_t **head, unsigned int kounta)
{
	(void)head;
	(void)kounta;
	beast.lifi = 1;
}

/**
 * chi_sum_que - This adds node to the tail stack
 * @n: The new_value
 * @head: The head of the stack
 * Return: no return
*/
void chi_sum_que(state_t **head, int n)
{
	state_t *new_node, *auth;

	auth = *head;
	new_node = malloc(sizeof(state_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (auth)
	{
		while (auth->next)
			auth = auth->next;
	}
	if (!auth)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auth->next = new_node;
		new_node->prev = auth;
	}
}
