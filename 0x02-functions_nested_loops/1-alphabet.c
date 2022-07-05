#include "main.h"

/**
 * print_alphabet-  Entry point of our method,
 * That prints alphabets in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
