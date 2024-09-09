/* Fig. 6.12: fig06_12.c
The name of an array is the same as &array[ 0 ] */ 
#include <stdio.h>

/* function main begins program execution */
int main(void)
{
	char array[5]; /* define an array of size 5 */
	printf(" array    = %p\n&array[0] = %p\n&array    = %p\n", 
		array, &array[0], &array); 
	return 0; /* indicates successful termination */

} /* end main */