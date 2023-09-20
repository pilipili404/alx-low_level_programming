#include "main.h"

/**
 * _strncpy - Copies a string with a specified limit
 *
 * @dest: The destination string where the copy will be placed
 * @src: The source string to be copied
 * @n: The maximum number of characters to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    // If src is shorter than n characters, pad dest with null terminators
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

