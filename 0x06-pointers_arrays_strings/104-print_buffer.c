#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer in a specific format.
 * @b: The buffer to print.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (j + i < size)
                printf("%02x", b[i + j] & 0xff);
            else
                printf("  ");

            if (j % 2 == 1)
                printf(" ");
        }

        for (j = 0; j < 10; j++)
        {
            if (j + i < size)
            {
                if (b[i + j] >= 32 && b[i + j] <= 126)
                    printf("%c", b[i + j]);
                else
                    printf(".");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

