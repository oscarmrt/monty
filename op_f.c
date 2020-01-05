#include "monty.h"

/**
 * op_f - Function
 * @h: pointer
 * @l: integer
 * @cmd: command
 *
 * Return: Nothing.
 */

void op_f(stack_t **h, unsigned int l, char *cmd)
{
	int x = 0;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{NULL, NULL}
	};

	for (; op[x].opcode; x++)
	{
		if ((strcmp(op[x].opcode, cmd)) == 0)
		{
			op[x].f(h, l);
			break;
		}
	}
	if (op[x].f == NULL)
	{dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", l, cmd);
		exit(EXIT_FAILURE);
	}
}
