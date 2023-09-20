#include "main.h"

/**
 * _strncat - Concatenates two strings with a specified limit
 * @dest: The destination string to which src will be appended
 * @src: The source string to be appended to dest
 * @n: The maximum number of bytes to append from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
        dest_len++;

    // Append characters from src to dest, up to a maximum of n bytes
    while (src[i] != '\0' && i < n)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Null-terminate the concatenated string
    dest[dest_len + i] = '\0';

    return dest;
}

