#include "main.h"

/**
 * puts_half - function print the second half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	if (str)
	{
		for (i = 0; *(str + i); ++i)
			;
		for (str += (i + 1) / 2; *str; ++str)
			_putchar(*str);
		_putchar('\n');
	}
}
