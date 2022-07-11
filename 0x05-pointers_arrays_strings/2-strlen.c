#include "main.h"

/**
 * _strlen - function culculates the length of a given string
 * @s: string where to check the length
 * Return: the length of the string
 */
int _strlen(char *s)
{
int len = 0;
if (s)
{
while (*(s + len))
++len;
}
return (len);
}
