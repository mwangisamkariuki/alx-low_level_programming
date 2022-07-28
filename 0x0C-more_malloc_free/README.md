# Task 0;
    Write a function that allocates memory using malloc.
    Prototype: void *malloc_checked(unsigned int b);
    Returns a pointer to the allocated memory
    if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

# Task 1;
    Write a function that concatenates two strings.
    Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
    The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
    If the function fails, it should return NULL
    If n is greater or equal to the length of s2 then use the entire string s2
    if NULL is passed, treat it as an empty string

# Task 2;
    Write a function that allocates memory for an array, using malloc.
    Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
    The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.

# Task 3;
    Write a function that creates an array of integers.
    Prototype: int *array_range(int min, int max);