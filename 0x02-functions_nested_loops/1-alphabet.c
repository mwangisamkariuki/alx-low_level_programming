#include "main.h"

/**
 * main -  Entry point of our method,
 * That alphabets followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
ch = 'a';
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
