#include "main.h"

/**
 *  more_numbers - print 0-14 ten times on a newline
 * char i is the character  that is being checked for loop cndition loop
 * Returns: void since it is only printing a loop
 */
void more_numbers(void)
{

int i;
int j;
i=0;
while (i <= 10)
{
j=0;
while (j <= 14)
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}
}
