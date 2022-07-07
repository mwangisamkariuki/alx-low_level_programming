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

	for (j = 0; j < 10; ++j)
	{
		for (i = 0; i < 15; ++i)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
