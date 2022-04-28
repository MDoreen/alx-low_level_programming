#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number in decimal
 * @index: starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index_slide, validate;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	index_slide = 1 << index;
	validate = n & index_slide;
	if (index_slide == validate)
		return (1);
	return (0);
}
