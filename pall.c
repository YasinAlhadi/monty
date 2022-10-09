#include "monty.h"

/**
 * m_pall - print all elements on stack
 * @stack: top of stack
 * @line_number: line number
 *
 * Return: void
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)(line_number);
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
