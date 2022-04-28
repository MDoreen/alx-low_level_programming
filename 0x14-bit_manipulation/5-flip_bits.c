#include "main.h"
/**
 * flip_bits -returns the number of bits you would need
 * to flip to get from one number to another.
 * bits you would need to flip to get from one number to another.
 *
 * @n: deciaml value
 * @m: decimal value
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int count;

	count = n ^ m;

	while (count)
	{
		i += count & 1;
		count = count >> 1;
	}

	return (i);
}
