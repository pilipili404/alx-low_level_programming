#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp, end;

	i = 0;
	end = n - 1;

	while (i < end)
	{
		tmp = *(a + i);
		*(a + i) = *(a + end);
		*(a + end) = tmp;
		i++;
		end--;
	}
}
