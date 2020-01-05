#include "monty.h"

/**
 * ps - pharse from buf from opcode
 * @bf: The pointer received
 * @hd: pointer
 * @l: integer
 * Return: Nothing.
 */

void ps(char *bf, stack_t **hd, unsigned int l)
{
	char *str;
	char *tkn;

	str = strtok(bf, " \n\t");
	tkn = strtok(NULL, " \n\t");
	setup.line = tkn;
	if (str && str[0] != '#')
		op_f(hd, l, str);
}

#include "monty.h"

/**
 * f_s - free list function
 * @h: The pointer received
 *
 * Return: Nothing.
 */

void f_s(stack_t *h)
{
	stack_t *hd;
	int x = 0;

	for (; h != NULL; x++)
	{
		hd = h->next;
		free(h);
		h = hd;
	}
	fclose(setup.file);
	free(setup.bf);
}
