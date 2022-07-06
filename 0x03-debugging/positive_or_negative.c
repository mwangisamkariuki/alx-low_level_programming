#include "main.h"
#include "0-main.c"
void positive_or_negative(int i)
{
    if (i<0)
    {printf("%d is negative",i);}
    else if(i==0)
    {printf("%d is zero",i);}
    else if (i>0)
    {printf("%d is positive",i);}
         
    return (0);
}