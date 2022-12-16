#include "monty.h"

/**
 * go - Operators
 * @op_f: Char pointer
 * @l: line
 * @stak: stack
 * Return: Void
 */


void (*go(char *op_f, unsigned int l, stack_t **stak))(stack_t**, unsigned int)
{
	int count;

	instruction_t operation[] = {
		{"pall", m_pall},
		{"add", m_add},
		{"pint", m_pint},
		{"swap", m_swap},
		{"pop", m_pop},
		{"sub", m_sub},
		{"div", m_div},
		{"mul", m_mul},
		{"mod", m_mod},
		{"nop", m_nop},
		{"rotl", m_rotl},
		{"rotr", m_rotr},
		{"pchar", m_pchar},
		{"pstr", m_pstr},
		{NULL, NULL}
	};

	for (count = 0; operation[count].opcode != NULL; count++)
	{
		if (strcmp(operation[count].opcode, op_f) == 0)
		{
			return (operation[count].f);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", l, op_f);
	fclose(file);
	m_free(*stak);
	exit(EXIT_FAILURE);
}
