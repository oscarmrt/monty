#ifndef MONTY_H_
#define MONTY_H_

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct setup_s - setup to the program
 * @file: the file
 * @line: the line
 * @bf: the buffer
 *
 * Description: setup for the variables used
 */

typedef struct setup_s
{
	FILE *file;
	char *line;
	char *bf;
} setup_t;

extern setup_t setup;

int main(int ac, char **av);
void ps(char *bf, stack_t **hd, unsigned int l);
void f_s(stack_t *h);
void op_f(stack_t **h, unsigned int l, char *cmd);
void _pint(stack_t *stack[], unsigned int l);

#endif
