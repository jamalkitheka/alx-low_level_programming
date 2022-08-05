#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the func
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int x, y = 0;
	va_list arg;

	datatype choice[] = { {'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL} };
	va_start(arg, format);

	while (format != NULL && format[y] != '\0')
	{
		x = 0;
		while (choice[x].letter != '\0')
		{
			if (choice[x].letter == format[y])
			{
				printf("%s", separator);
				choice[x].func(arg);
				separator = ", ";
			}
			x++;
		}
		y++;
	}
	va_end(arg);
	printf("\n");
}
