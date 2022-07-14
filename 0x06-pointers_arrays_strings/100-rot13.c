#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n > -1)
	{
		while (n > 9)
			print_number(n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('-');
		while (n < -9)
			print_number(n / -10);
		_putchar('0' - n % 10);
	}
}
