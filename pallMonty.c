#include "monty.h"

/**
 * _pall - Prints all values on the stack from the top.
 * @stack: double pointer to the head of stack
 * @line_number: script line number.
 *
 * Return: No return.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;

	(void)(line_number);
	while (element != NULL)
	{
		printf("%d\n", element->n);
		element = element->next;
	}
}
