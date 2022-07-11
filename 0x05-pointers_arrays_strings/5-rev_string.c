#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *temp = s;

	if (s)
	{
		while (*temp)
			++temp;

		while (s < --temp)
		{
			*s ^= *temp;
			*temp ^= *s;
			*s ^= *temp;
			++s;
		}
	}
}
