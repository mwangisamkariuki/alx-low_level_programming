#ifndef MAIN_H
#define MAIN_H

/*function that fills memory with a constant byte*/
char *_memset(char *s, char b, unsigned int n);

/*function that copies memory area.*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*function that locates a character in a string */
char *_strchr(char *s, char c);

/*a function that gets the length of a prefix substring.*/
unsigned int _strspn(char *s, char *accept);

/*a function that searches a string for any of a set of bytes.*/
char *_strpbrk(char *s, char *accept);

#endif/* MAIN_H */