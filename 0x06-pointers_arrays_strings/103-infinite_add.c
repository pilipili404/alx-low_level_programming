#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int i = 0, j = 0, k = 0;

    while (n1[i] != '\0' || n2[j] != '\0' || carry)
    {
        int num1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
        int num2 = (n2[j] != '\0') ? n2[j] - '0' : 0;

        int sum = num1 + num2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        if (k < size_r - 1)
        {
            r[k] = sum + '0';
            k++;
        }
        else
        {
            return (0); // Result cannot fit in r
        }

        if (n1[i] != '\0')
            i++;
        if (n2[j] != '\0')
            j++;
    }

    r[k] = '\0';
    return (r);
}

