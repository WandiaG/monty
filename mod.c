#include "monty.h"

/**
 * _mod - multiplies the second and the first elements of the stack,
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Usage: mod .
 * Return: No return.
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	int temp_variable;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp_variable = (*stack)->n;
	_pop(stack, line_number);
	if (temp_variable == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->n %= temp_variable;
}
