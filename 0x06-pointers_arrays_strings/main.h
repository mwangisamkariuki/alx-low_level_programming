#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

/* a function prototype that compares two strings.*/
int _strcmp(char *s1, char *s2);

/* a function that reverses the content of an array of integers.*/
void reverse_array(int *a, int n);

/**function prototype that changes all lowercase
 * letters of a string to uppercase
 */
char *string_toupper(char *);

/*a function that capitalizes all words of a string.*/
char *cap_string(char *);

/*function that encodes a string into 1337*/
char *leet(char *);

/*a function that encodes a string using rot13.*/
char *rot13(char *);


int _putchar(char c);

/*print an int number*/
void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);
#endif
