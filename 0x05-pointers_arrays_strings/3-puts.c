#include "main.h"
/**
 * _puts - prints a string
 * @str: is the strng valuable where the tring is stored
 * Return: *str
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
