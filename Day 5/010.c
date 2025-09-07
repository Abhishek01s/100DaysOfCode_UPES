// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main(){
  int tsec;
  scanf("%d", &tsec);
  printf("%d:%d:%d\n", tsec/3600, (tsec%3600)/60, tsec%60);
  return 0;
}
