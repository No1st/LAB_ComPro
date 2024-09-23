
/* Fig. 10.5: fig10_05.c An example of a union */
#include <stdio.h>

/* number union definition */ 
union number {
  int x;
  double y;
}; /* end union number */

int main(void) {
  union number value; /* define union variable */
  value.x = 100;      /* put an integer into the union */
  printf("%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
         "Put a value in the integer member", "and print both members.",
         "int:", value.x, "double:", value.y);
  value.y = 100.0; /* put a double into the same union */
  printf("%s\n%s\n%s\n %d\n\n%s\n %f\n", "Put a value in the floating member",
         "and print both members.", "int:", value.x, "double:", value.y);
  return 0; /* indicates successful termination */
} /* end main */