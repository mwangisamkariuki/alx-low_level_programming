#include "main.h"

/**
 * puts2 - print every other,i.e skips character of a string
 * and prints the next character in a given string
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
if (str)
{
do {
if (*str)
_putchar(*str++);
} while (*str++);
_putchar('\n');
}
}
