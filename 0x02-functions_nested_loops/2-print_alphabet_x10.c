#include "main.h"

/**
 * print_alphabet_x10 -  Entry point of our method,
 * That prints alphabets in lowercase 10 times followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
