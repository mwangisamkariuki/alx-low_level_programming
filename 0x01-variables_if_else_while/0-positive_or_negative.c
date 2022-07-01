#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/** generate a random number,
 *  then determines if it is positive ,
 *  prints the results as +ve or negative
 *  plus a new line
 *  Returns 0 on successfull execution
 * */
int main() {
    int n;
	      
    	srand(time(0));
	n = rand() - RAND_MAX / 2;
		
	if (n > 0)
	       printf("%d is positive number\n", n);

	else if (n == 0)
	       printf("%d is 0 \n", n);

	else if (n < 0 )
	       printf("%d is a negative number\n", n);
	  			        
	return (0);
}
