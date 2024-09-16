
/* Fig. 7.16: fig07_16.c
Applying sizeof to an array name returns the number of bytes in the array. */  \

#include<stdio.h>

size_t getSize(float *ptr); /* prototype */

int main(void) {
  float array[20]; /* create array */

  printf("The number of bytes in the array is %d"
         "\nThe number of bytes returned by getSize is %d\n",
         sizeof(array), getSize(array));

  return 0; /* indicates successful termination */

} /* end main */

/* return size of ptr */
size_t getSize(float *ptr) {
     return sizeof(ptr); 
} /* end function getSize */