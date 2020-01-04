#include "monty.h"

/**
 * mf_function - Function 
 * @argv: The argv received 
 *
 * Return: Nothing.
 */

void mf_function(char **argv)
{
    setup_t *filename = fopen(argv[1], "r")
    if (filename == NULL)
    {
        dprintf(stderr, "Error: Can't open file %s", argv[1]);
    }
    else
    return (0);
}