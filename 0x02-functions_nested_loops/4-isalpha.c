#include "main.h"
/**
 * _isalpha - checks the alphabetic charchters
 * @c: hold the input to be processed by isalpha
 * Return: (1) when its a letter (0) otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
