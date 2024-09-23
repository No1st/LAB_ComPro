
/* Fig. 10.9: fig10_09.c
Using the bitwise AND, bitwise inclusive OR, bitwise exclusive OR and bitwise
complement operators */                                                        \
#include<stdio.h>

void displayBits(unsigned value); /* prototype */

int main(void) {
  unsigned number1;
  unsigned number2;
  unsigned mask;
  unsigned setBits;
  /* demonstrate bitwise AND (&) */
  number1 = 65535;
  mask = 1;

  printf("The result of combining the following\n");
  displayBits(number1);
  displayBits(mask);
  printf("using the bitwise AND operator & is\n");
  displayBits(number1 & mask);

  /* demonstrate bitwise inclusive OR (1) */ 
  number1 = 15;
  setBits = 241;
  printf("\nThe result of combining the following\n");
  displayBits(number1);
  displayBits(setBits);
  printf("using the bitwise inclusive OR operator | is\n");
  displayBits(number1 | setBits);

  /* demonstrate bitwise exclusive OR (^) */
  number1 = 139;
  number2 = 199;
  printf("\nThe result of combining the following\n");
  displayBits(number1);
  displayBits(number2);
  printf("using the bitwise exclusive OR operator ▲ is\n");
  displayBits(number1 ^ number2);

  /* demonstrate bitwise complement (~)*/ 
  number1 = 21845;
  printf("\nThe one's complement of \n");
  displayBits(number1);
  printf("is\n");
  displayBits(number1);

  return 0; /* indicates successful termination */

} /* end main */

/* display bits of an unsigned integer value */ 
void displayBits(unsigned value) {

  unsigned c; /* counter */

  /* declare displayMask and left shift 31 bits */ 
  unsigned displayMask = 1 << 31;
  printf("%10u = ", value);

  /* loop through bits */
  for (c = 1; c <= 32; c++) {
    
    putchar(value & displayMask ? '1' : '0');
    value <<= 1;      /* shift value left by 1 */

    if (c % 8 == 0) { /* output a space after 8 bits */
      putchar('\n');
    } /* end if */

  } /* end for */
  putchar('\n');
} /*end function displayBits */