#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of '1' and '0'
 *
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, len;
	unsigned int deci = 0;
	int i;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	if (len < 0)
		return (0);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			deci += k;

		k *= 2;
	}

	return (deci);
}

/**
 * _strlen - gets the length of a string
 * @b: string
 *
 * Return: length of string or 0
 */
unsigned int _strlen(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (-1);

	while (b[i] != '\0')
	{
		i++;
	}

	return (i);
}
