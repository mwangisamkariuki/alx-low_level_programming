#include "main.h"

/**
 * swap_int - function takes 2 parameters of int type,
 * and swaps the two input values
 * @a: the first intager to be swapped with b
 * @b: The second Int to be swapped with a
 */

void swap_int (int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
