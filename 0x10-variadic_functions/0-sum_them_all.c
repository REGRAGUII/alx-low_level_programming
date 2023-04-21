#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - Return the sum of all its parametres
 *@n: The number of paramters passed to the function.
 *@...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
