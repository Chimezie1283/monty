#include "monty.h"

/**
 * chi_addnode - This adds node to the head stack
 * @head: This the head of the stack
 * @n: This is the new value
 * Return: nothing to return
*/
void chi_addnode(state_t **head, int n)
{

	state_t *new_node, *auth;

	auth = *head;
	new_node = malloc(sizeof(state_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auth)
		auth->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
