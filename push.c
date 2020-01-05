#include "monty.h"

/**
 * _push - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */

void _push(stack_t **stack, unsigned int line_number)
{
stack_t *nn;

nn = malloc(sizeof(stack_t));
if (nn == NULL)
{
	dprintf(STDERR_FILENO, "USAGE: monty file\n");
	f_s(nn);
	exit(EXIT_FAILURE);
}
if ((!setup.line) && (setup.line != 0))
{
	dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		f_s((*stack));
		free(nn);
		exit(EXIT_FAILURE);
}
if (setup.line)
{
	nn->n = atoi(setup.line);
	nn->next = *stack;
	nn->prev = NULL;
	if (*stack)
		(*stack)->prev = nn;
	*stack = nn;
}
else
{
	dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
	f_s((*stack));
	free(nn);
	exit(EXIT_FAILURE);
}
}
