#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: decimal number
 * @index:  is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	tmp = ~(1 << index);
	*n = *n & tmp;
	return (1);
}
