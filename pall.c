#include "monty.h"

/**
 * _pall - Function
 * @stack: The pointer
 * @line_number: line number
 * Return: Nothing.
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *stk = *stack;
	(void) line_number;

	while (stk != NULL)
	{
		printf("%d\n", stk->n);
		stk = stk->next;
	}
}
