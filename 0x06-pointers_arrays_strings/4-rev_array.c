#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: an array of integers
 * @n: the number of elements in array
 */

void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; j < (n / 2); j++)
	{
		k = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = k;
	}
}
