#include "main.h"

/**
 * _print_binary - print a number in binary
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
