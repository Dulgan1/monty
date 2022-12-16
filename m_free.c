#include "monty.h"

/**
 * m_free - Free stack
 * @stack: Stack pointer
 * Return: Void
 */


void m_free(stack_t *stack)
{
	if (stack)
	{
		m_free(stack->next);
		free(stack);
	}
}
