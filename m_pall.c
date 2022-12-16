#include "monty.h"

/**
 * m_pall - function that prints all elements on the stack
 * @stack: pointer to head of the stack
 * @line_number: where the instruction appears
 * Description: 0. push, pall
 * Return: on success nothing, on fail EXIT_FAILURE
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
