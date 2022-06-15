#include "monty.h"

/**
 *sub-substract the top of the element
 *@stack:pointer
 *@lineNum:line number
 */

void sub(stack_t **stack, unsigned int lineNum)
{
	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", lineNum);
		cleaner();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	delet_at_idx(stack, 0);
}

/**
 *div_n-divide the top of the element
 *@stack:pointer
 *@lineNum:line number
 */

void div_n(stack_t **stack, unsigned int lineNum)
{
	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack\n", lineNum);
		cleaner();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", lineNum);
		cleaner();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;
	delet_at_idx(stack, 0);
}