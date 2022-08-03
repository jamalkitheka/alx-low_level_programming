#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct operation function
 * @s: operator passed as argument
 * Return: pointer to the func corresponding to the operator given
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (!(strcmp(s, ops[i].op)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
