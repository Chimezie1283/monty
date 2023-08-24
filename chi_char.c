#include "monty.h"

/**
 * chi_pchar - This prints the char at the top of the stack,
 * followed by a new line
 * @head: The stack head
 * @kounta: The line number
 * Return: nothing to return
*/
void chi_pchar(stack_t **head, unsigned int kounta)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", kounta);
		fclose(beast.file);
		free(beast.content);
		f_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
