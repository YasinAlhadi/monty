#include "monty.h"
/**
 * m_add - adds the top two elements of the stack
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: void
 */

void m_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int sum = 0, i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (stack == NULL || (*stack)->next == NULL || i <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->next->n + (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n = sum;
}

