#include <stdio.h>

int main()
{
  int compA = 99;
  int compB = 100;
  int comp;

  //compA > compB ? printf("You see, you are broke") : printf("Haha, I will forever be richer");
  comp = (compA > compB) ? compA : compB;
  printf("%d", comp);
return 0;
}
