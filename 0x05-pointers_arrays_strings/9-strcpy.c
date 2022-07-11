#include "main.h"

/**
 * _strcpy - copy a string (including the terminating null-byte)
 *
 * @dest: the buffer to which the string should be copied
 * @src: the string to copy
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
