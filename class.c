#include <stdio.h>

void main() {
  int n, i, b = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
  
    if (n % i == 0) {
      b = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is neither prime nor composite.\n");
  } 
  else {
    if (b == 0)
      printf("Entered value is prime \n", n);
    else
      printf("Entered value  isnot prime \n", n);
  }
}