#include "main.h"
/**
 * print_last_digit - it prints the last digit
 * @n: hold the integer to be computed
 * Return: n
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
