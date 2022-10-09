#include "monty.h"

/**
 * m_pint - print element at top of stack
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: void
 */

void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}
