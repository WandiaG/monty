#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack.
 * @stack: double pointer to the head of stack.
 * @line_number: script line number.
 *
 * Return: No return.
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_variable;

	(void)(line_number);
	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_variable = (*stack)->next;
	(*stack)->prev = (*stack)->next;
	(*stack)->next = temp_variable->next;
	temp_variable->prev = NULL;
	(*stack)->prev = temp_variable;
	if (temp_variable->next)
		temp_variable->next->prev = *stack;
	temp_variable->next = *stack;
	(*stack) = (*stack)->prev;
}
