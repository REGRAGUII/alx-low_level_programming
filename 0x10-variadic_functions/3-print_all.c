#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Print anything
 * @format: List of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(args);
}
