#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the func
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *arg;
	unsigned int x = 0, middle = 0;
	va_list valist;

	va_start(valist, format);
	while (format && format[x])
	{
		if (middle)
			printf(", ");
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				arg = va_arg(valist, char *);
				if (arg)
				{
					printf("%s", arg);
					break;
				}
				printf("%p", arg);
				break;
			default:
				middle = 0;
				x++;
				continue;
		}
		middle = 1;
		x++;		
	}
	printf("\n");
	va_end(valist);
}
