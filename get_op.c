#include "monty.h"

instruct_func get_op_func(char *str)
{
	int i;

	instruction_t instruct[] = {
		{"push", m_push},
		{"pall", m_pall},
		{NULL, NULL},
	};

	i = 0;
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0)
	{
		i++;
	}
	return (instruct[i].f);
}

