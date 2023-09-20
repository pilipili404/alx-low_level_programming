#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to convert
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *str)
{
    if (str == NULL)
        return NULL;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }

    return str;
}


