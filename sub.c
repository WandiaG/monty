#include "monty.h"

/**
 * _sub - Subtracts the top element of the stack from the,
 * second top element of the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Return: No return.
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	int temp_variable;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_variable = (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n -= temp_variable;
}
