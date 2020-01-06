#include "monty.h"

/**
 * _swap - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack && (*stack)->next)
	{
		tmp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = tmp;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
