#include "monty.h"

/**
 * _add - Adds the top two elements of the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Usage: add .
 * it deletes a stack making it one stack shorter each time.
 * Return: No return.
 */
void _add(stack_t **stack, unsigned int line_number)
{
	int temp_variable;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_variable = (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n += temp_variable;
}
