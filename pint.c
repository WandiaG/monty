#include "monty.h"

/**
 * _pint - Prints the value at the top of the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Return: No return.
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
