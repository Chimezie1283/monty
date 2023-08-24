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
 * struct state_s - The doubly linked list of a stack/queue)
 * @n: The integer
 * @prev: This points to the previous element in the stack/queue)
 * @next: This points to the next element in the stack/queue)
 *
 * Description: The doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct state_s
{
	int n;
	struct state_s *prev;
	struct state_s *next;
} state_t;
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
	void (*f)(state_t **state, unsigned int line_number);
} instruction_t;
char *_re_allocate(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t get_standin(char **lineptr, int file);
char  *klin_line(char *content);
void chi_push_f(state_t **head, unsigned int numba);
void chi_pall_f(state_t **head, unsigned int numba);
void chi_print_f(state_t **head, unsigned int numba);
int execute(char *content, state_t **head, unsigned int counta, FILE *file);
void f_state(state_t *head);
void chi_pop(state_t **head, unsigned int kounta);
void chi_change(state_t **head, unsigned int kounta);
void chi_sum(state_t **head, unsigned int kounta);
void chi_p(state_t **head, unsigned int kounta);
void chi_minus(state_t **head, unsigned int kounta);
void chi_share(state_t **head, unsigned int kounta);
void chi_increase(state_t **head, unsigned int kounta);
void chi_mild(state_t **head, unsigned int kounta);
void chi_char(state_t **head, unsigned int kounta);
void chi_string(state_t **head, unsigned int kounta);
void chi_rotl(state_t **head, unsigned int kounta);
void chi_rotr(state_t **head, __attribute__((unused)) unsigned int kounta);
void chi_sum_node(state_t **head, int n);
void chi_sum_que(state_t **head, int n);
void chi_line(state_t **head, unsigned int kounta);
void chi_free_state(state_t **head, unsigned int kounta);

#endif
