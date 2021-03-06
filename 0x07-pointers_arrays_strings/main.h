#ifndef MAIN_H
#define MAIN_H

/*outputs characters*/
int _putchar(char c);

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

/*a function that locates a substring.*/
char *_strstr(char *haystack, char *needle);

/*function that prints the chessboard.*/
void print_chessboard(char (*a)[8]);

/*a function that prints sum of 2 diagonals of a square*/
void print_diagsums(int *a, int size);

/*a function that sets the value of a pointer to a char.*/
void set_string(char **s, char *to);

#endif
/* end of MAIN_H */