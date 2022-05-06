#include "variadic_functions.h"
#include<stdarg.h>
/*file: 0-sum_them_all.c*/
/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of parameters
 *
 * Return: sum of parameters, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
