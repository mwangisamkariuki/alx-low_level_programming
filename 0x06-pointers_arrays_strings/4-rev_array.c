#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: the array to reverse
 * @temp: the size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int temp)
{
	for ( ; --temp > 0; ++a, --temp)
	{
		*a ^= a[temp];
		a[temp] ^= *a;
		*a ^= a[temp];
	}
}
