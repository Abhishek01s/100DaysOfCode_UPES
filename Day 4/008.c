// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);
  printf("Sum=%d\n", a*(a+1)/2);  // Was not asked to used loop, so used the formula of Arithmetic Progression, wrote this comment just to clarify. Also not adding extra output than asked because i am trying to imitate Competitive Programming style where input and output should match the specifications.
  return 0;
}
