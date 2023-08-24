#include "monty.h"

/**
  *chi_rotr- This rotates the stack to the bottom
  *@head: The stack head
  *@kounta: The line_number
  *Return: no return
 */
void chi_rotr(stack_t **head, __attribute__((unused)) unsigned int kounta)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
