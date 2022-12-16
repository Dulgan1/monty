#include "monty.h"

/**
 * m_pchar - function that prints the char at the top of the stack
 * @stack: pointer to head of the stack
 * @line_number: where the instruction appears
 * Description: 11. pchar
 * Return: on success nothing, on fail EXIT_FAILURE
 */
void m_pchar(stack_t **stack, unsigned int line_number)
{
	if ((stack == NULL) || ((*stack) == NULL))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		m_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (!(isascii((*stack)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
