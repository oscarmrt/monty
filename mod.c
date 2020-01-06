#include "monty.h"

/**
 * _mod - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		if ((*stack)->n == 0)
		{
			dprintf(STDERR_FILENO, "L:%d: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
		(*stack)->next->n = (*stack)->next->n % (*stack)->n;
		*stack = (*stack)->next;
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
	else
	{
		dprintf(STDERR_FILENO, "L:%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
