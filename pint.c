#include "monty.h"

/**
 * _pint - Function 
 * @h: The pointer
 * Return: Nothing.
 */

void _pint(stack_s *h)
{
	int k;

if (h == NULL)


	for (k = 0; h != '\0'; k++)
	{
	    h = h->next;
	}
    printf("%d\n", h->n);
}