#include "monty.h"

/**
 * check_int - checks that a string only contains digits
 * @str: string to be checked
 *
 * Return: 0 if str is digit
 */
int check_int(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * parse_line - split line for an opcode and arguments
 * @line: line to be split
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: opcode or NULL if fail
 */
char *parse_line(char *line, stack_t **stack, unsigned int line_number)
{
	char *op, *push, *arg;
	(void)stack;

	push = "push";
	op = strtok(line, "\n\t\r ");
	if (op == NULL)
		return (NULL);

	if (strcmp(op, push) == 0)
	{
		arg = strtok(NULL, "\n\t\r ");
		if (check_int(arg) == 1 && arg != NULL)
		{
			var_global.push_arg = atoi(arg);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	return (op);
}
