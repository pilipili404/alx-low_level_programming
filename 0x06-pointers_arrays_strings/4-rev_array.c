#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
    int temp, i, j;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        // Swap elements at positions i and j
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

