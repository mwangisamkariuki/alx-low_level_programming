#include <stdio.h>
/**
 * main - print lower alphabets,
 * in a reversed manner
 * then puts char
 * Return: always 0 on success
 */
int main(void)
{
    char ch;

    for (ch = 'z'; ch >= 'a'; ch--)
        putchar(ch);
        putchar('\n');
        return (0);
}
