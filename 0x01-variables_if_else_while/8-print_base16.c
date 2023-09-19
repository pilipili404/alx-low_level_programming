#include <stdio.h>

/**
 * main - it prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}

	d = 'a';

	while (d <= 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
