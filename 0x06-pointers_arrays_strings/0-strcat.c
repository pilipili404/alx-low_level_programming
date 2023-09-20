#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: The destination string to which src will be appended
 * @src: The source string to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
        dest_len++;

    // Append characters from src to dest
    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Null-terminate the concatenated string
    dest[dest_len + i] = '\0';

    return dest;
}

