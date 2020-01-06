#include "monty.h"

/**
 * _add - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		(*stack)->next->n = (*stack)->next->n + (*stack)->n;
		*stack = (*stack)->next;
		free((*stack)->prev);
		(*stack)->prev = NULL;
	}
	else
	{
		fprintf(stderr, "L:%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
