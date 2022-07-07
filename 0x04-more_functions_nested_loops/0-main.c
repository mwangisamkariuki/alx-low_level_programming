#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of our function that
 * checks the code and returns the character and
 * whether it is Uppercase (1) or not (0).
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
