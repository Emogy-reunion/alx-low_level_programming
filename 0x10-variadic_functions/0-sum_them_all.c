#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the No. of parameters to the functions
 * @...:  a variable No. of parameters to calculate the sum of
 *
 * Return: if  n == 0 - 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int u, sum = 0;

	va_start(ap, n);

	for (u = 0; u < n; u++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
