/*
   Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
   90-100: Grade A
   80-89: Grade B
   70-79: Grade C
   60-69: Grade D
   below 60: Grade F.
*/

#include <stdio.h>

int main(){
  int prcnt;
  scanf("%d", &prcnt);
  if(prcnt<60)
    printf("Grade F\n");
  else if(prcnt<70)
    printf("Grade D\n");
  else if(prcnt<80)
    printf("Grade C\n");
  else if(prcnt<90)
    printf("Grade B\n");
  else
    printf("Grade A\n");
  return 0;
}
