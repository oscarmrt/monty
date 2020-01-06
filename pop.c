#include "monty.h"

/**
 * _pop - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = tmp->next;
	if (tmp->next)
		tmp->next->prev = NULL;
	free(tmp);
}
