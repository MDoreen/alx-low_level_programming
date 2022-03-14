#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char a = 'a';
	char A = 'A';
	int n = 0;

	while (n < 52)
	{
		if (n < 26)
		{
			putchar(a);
			a++;
		} else
		{
			putchar(A);
			A++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

