#include "monty.h"

/**
 * main - Function
 * @ac: The argc received
 * @av: The argv received
 *
 * Return: Nothing.
 */

int main(int ac, char **av)
{
	ssize_t c;
	size_t bufsz = 0;
	unsigned int l = 0;
	stack_t *hd = NULL;
	setup_t setup = {NULL, NULL, NULL};

if (ac != 2)
{
	dprintf(STDERR_FILENO, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

setup.file = fopen(av[1], "r");
	if (setup.file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
			exit(EXIT_FAILURE);
	}
	for (; (c = getline(&setup.bf, &bufsz, setup.file) != EOF); l++)
		ps(setup.bf, &hd, l);
	f_s(hd);
	exit(EXIT_SUCCESS);
}
