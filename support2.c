#include "monty.h"

/**
 *stack-add data top of stack
 *@stack- pointer
 *@lineNum: find lin
 */

void stack(stack_t **stack, unsigned int lineNum)
{
	(void)stack;
	(void)lineNum;
	args.order = 1;
}

/**
 *queue- add new data at end of stack
 *@stack:pointer
 *@lineNum:line num
 */

void queue(stack_t **stack, __attribute__((unused)) unsigned int lineNum)
{
	(void)stack;
	args.order = 0;
}

/**
 *print_list-print list of node
 *@head:pointer of node
 */

size_t print_list(const stack_t *head)
{
	size_t node = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		node++;
	}
	return (node);
}
