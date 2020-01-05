#include "monty.h"

/**
 * _pint - Function
 * @stack: The pointer
 * @l: line number
 * Return: Nothing.
 */

void _pint(stack_t *stack[], unsigned int l)
{
stack_t *tmp;

tmp = *stack;
if (tmp == NULL)
{
	dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", l);
	exit(EXIT_FAILURE);
}
printf("%d\n", tmp->n);
}
