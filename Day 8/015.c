// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
  char ch;
  scanf("%c", &ch);
  if(ch>='a' && ch <='z')
    printf("Lowercase alphabet\n");
  else if(ch>='A' && ch<='Z')
    printf("Uppercase alphabet\n");
  else
    printf("Special character\n");
  return 0;
}
