#include "main.h"

/**
 * print_most_numbers - the function print numbers
 * from 0 to 9 with exception of 2-4
 * char i is the character  that is being checked by the loop
 * mul is tvoid since it is only printing a loop
 */

void print_most_numbers(void)
{

char i;
for (i = '0' ; i <= '9'; i++)
if (i != '2' && i != '4')
{
_putchar(i);
}
_putchar('\n');
}
