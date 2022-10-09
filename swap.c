#include "monty.h"

/**
 * m_swap - swaps the top two elements of the stack
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: void
 */
void m_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int swap;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swap = temp->n;
	temp->n = temp->next->n;
	temp->next->n = swap;
}
