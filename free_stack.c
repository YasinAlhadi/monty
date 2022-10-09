#include "monty.h"

/**
 * free_stack - free stack
 * @head: head of stack
 *
 * Rerturn: void
 */

void free_stack(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
