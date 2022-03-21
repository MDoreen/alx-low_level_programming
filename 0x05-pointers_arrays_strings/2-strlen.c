#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: String to count
 *
 * Return: String lenght
 */
int _strlen(char *s)
{
	int c = 0;
	
	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);

}
