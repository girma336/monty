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
