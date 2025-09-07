// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  if(b==0)
    printf("Sum = %d, Diff = %d, Product = 0, Quotient = Not Defined\n", a, a);
  else
    printf("Sum = %d, Diff = %d, Product = %d, Quotient = %d\n", a+b, a-b, a*b, a/b);
  return 0;
}
