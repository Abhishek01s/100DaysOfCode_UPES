// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>

int main(){
  char ch;
  scanf("%c", &ch);
  ch = tolower(ch);
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')      // Using a array to store vowels and then iterate will be more efficient i guess.
    printf("Vowel\n");
  else
    printf("Consonant\n");
  return 0;
}
