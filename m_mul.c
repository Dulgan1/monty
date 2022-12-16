#include "monty.h"

/**
 * m_mul - function that multiples the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 8. mul
 * Return: on success, nothing, on fail, EXIT_FAILURE
 */
void m_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n *= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
