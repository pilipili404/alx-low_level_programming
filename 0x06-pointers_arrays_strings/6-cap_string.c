#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to convert
 * Return: A pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 'a' + 'A';
		i++;
	}

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n'))
			str[i] = str[i] - 'a' + 'A';
		i++;
	}

	return (str);
}
