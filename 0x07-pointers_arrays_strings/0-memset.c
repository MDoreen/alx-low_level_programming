#include "main.h"

/**
 * _memeset - fills memory with a constant byte
 * @s: memory space to be filled
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Return: the memory area or space to be filled 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
