#include "monty.h"

/**
 * m_push - push an integer onto the stack
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: void
 */
void m_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	(void)(line_number);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = var_global.push_arg;
	new->next = *stack;
	new->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
