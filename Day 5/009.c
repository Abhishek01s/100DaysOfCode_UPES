// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main(){
  float p, r, t;
  scanf("%f %f %f", &p, &r, &t);
  printf("Simple Interest=%.0f, Compound Interest=%.2f\n", p*r*t/100, p*(pow(1+r/100, t)-1));
  return 0;
}
