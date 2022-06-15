#include "monty.h"

/**
 *push-add data at top of the stack
 *@stack:pointer of the node
 *@linNum:the nember of line can be given
 */

void push(stack_t **stack, unsigned int lineNum)
{
	register int num;
	char *gir = strtok(NULL, "\n");

	if (check_string(gir) == -1)
	{
		fprintf(stderr, "L%u: usage push integer \n", lineNum);
		cleaner();
		exit(EXIT_FAILURE);
	}

	num = atoi(gir);
	if (args.order == 1)
	{
		add_node_first(stack, num);
	}
	else 
		add_at_end(stack, num);
}

void pall(stack_t **stack, unsigned int lineNum)
{
	(void)lineNum;
	print_list(*stack);
}
