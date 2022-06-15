#include "monty.h"

/**
 *check_string-check the input string or not
 *@s:input value
 *Return:0 or 1
 */

int check_string(char *str)
{
	register int idx = 0;

	if (str == NULL)
		return (-1);
	if (*str == '-')
		str++;
	while(str[idx])
	{
		if (str[idx] >= '0' && str[idx] <= '9')
			idx++;
		else
			return (-1);
	}
	return (1);
}
