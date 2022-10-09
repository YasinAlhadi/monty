#include "monty.h"
/*global_var var_global;*/

/**
 * main - monty interperter
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	stack_t *stack;

	stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(argv[1], &stack);
	free_stack(stack);
	return (0);
}
