#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, uint = 0, len;

	if (b == NULL || b[0] == '\0')
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	len = len - 1;

	while (i <= len)
	{
		dec = (b[i] - '0') << (len - i);
		uint = dec + uint;
		i++;
	}
	return (uint);
}
