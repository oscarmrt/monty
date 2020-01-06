#include "monty.h"

/**
 * _sub - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		(*stack)->next->n = (*stack)->next->n - (*stack)->n;
		*stack = (*stack)->next;
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
	else
	{
		dprintf(STDERR_FILENO, "L:%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
