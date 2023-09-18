#include "main.h"
/**
 * _strlen  returns the lenght string
 * @s: pointer to a charachter
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		++length;
		++s;
	}
	return (length);
}
