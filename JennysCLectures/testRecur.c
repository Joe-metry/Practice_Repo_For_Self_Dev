#include <stdio.h>

int Fac(int a)
{
  int N, i, fact;
  printf("Enter number:\n"); scanf("%d", &N);
  for(i=N; i>0; i--)
    {
      fact *= i;
    }
  if(a<1) return fact;
  else
  {
    printf("%d\n", a);
    Fac(a-1);
    printf("%d\n", a);
  }
  return fact;
}
int main(int argc, char *argv[]) 
{
  int y;
  y = Fac(5);
  printf("%d\n", y);
  return 0;
}
