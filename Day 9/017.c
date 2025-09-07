// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){
  int a, b, c, d;
  scanf("%d %d %d", &a, &b, &c);
  d = b*b-4*a*c;
  if(d<0)
    printf("Roots are complex\n");
  else if(d>0)
    printf("Roots are real and different: %.0f, %.0f\n", (-b-sqrt(d))/(2*a), (-b+sqrt(d))/(2*a));
  else
    printf("Roots are real and same: %d\n", -b/(2*a));
  return 0;
}
