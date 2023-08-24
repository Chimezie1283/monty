#define _GNU_SOURCE
#define  _POSIX_C_SOURCE 200809L

#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

/**
 * struct stack_s - The doubly linked list of a stack/queue)
 * @n: The integer
 * @prev: This points to the previous element in the stack/queue)
 * @next: This points to the next element in the stack/queue)
 *
 * Description: The doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct beast_s - The ariables -args, file, line content
 * @arg: The value
 * @file: The pointer to monty file
 * @content: The line content
 * @lifi: The flag change stack / queue
 * Description: This carries values through the program
 */
typedef struct beast_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  beast_t;
extern beast_t beast;

/**
 * struct instruction_s - The opcode and its function
 * @opcode: This is the opcode
 * @f: This function handles the opcode
 *
 * Description: This is an opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *chi_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t chi_getstdin(char **lineptr, int file);
char  *klin_line(char *content);
void chi_push(stack_t **head, unsigned int numba);
void chi_pall(stack_t **head, unsigned int numba);
void chi_pint(stack_t **head, unsigned int numba);
int execute(char *content, stack_t **head, unsigned int counta, FILE *file);
void f_stack(stack_t *head);
void chi_pop(stack_t **head, unsigned int kounta);
void chi_swap(stack_t **head, unsigned int kounta);
void chi_add(stack_t **head, unsigned int kounta);
void chi_nop(stack_t **head, unsigned int kounta);
void chi_sub(stack_t **head, unsigned int kounta);
void chi_div(stack_t **head, unsigned int kounta);
void chi_mul(stack_t **head, unsigned int kounta);
void chi_mod(stack_t **head, unsigned int kounta);
void chi_pchar(stack_t **head, unsigned int kounta);
void chi_pstr(stack_t **head, unsigned int kounta);
void chi_rotl(stack_t **head, unsigned int kounta);
void chi_rotr(stack_t **head, __attribute__((unused)) unsigned int kounta);
void chi_addnode(stack_t **head, int n);
void chi_addqueue(stack_t **head, int n);
void chi_queue(stack_t **head, unsigned int kounta);
void chi_stack(stack_t **head, unsigned int kounta);

#endif
