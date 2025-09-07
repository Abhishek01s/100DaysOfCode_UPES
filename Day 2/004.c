// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.1415

int main(){
  int r;
  scanf("%d", &r);
  printf("Area=%.2f, Circumference=%.2f\n", PI*r*r, 2*PI*r);
  return 0;
}
