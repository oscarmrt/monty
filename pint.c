#include "monty.h"

/**
 * _pint - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", line_number);
			exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
