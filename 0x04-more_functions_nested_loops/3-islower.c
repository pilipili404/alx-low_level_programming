#include "main.h"
/**
 * _islower check if its lowercase
 * @c: gets the characters to be checked
 * Return: 1 if is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
