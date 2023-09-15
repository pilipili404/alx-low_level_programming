#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 8
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 8; n++)
		_putchar('0' + n);

	_putchar('\n');
}
