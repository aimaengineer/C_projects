#include "custom_math.h"
#include <stdio.h>
int main() {
  int i;
  int f = 18;
  printf("Factorial of f = %d is %ld\n", f , factorial(f));
  printf("Fibbonachi of f = %d is ", f);
  for (i = 0;i < f;i++)
    printf("%d ",  fibbonachi(i));
  printf("\n");
}
