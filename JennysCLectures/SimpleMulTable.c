#include <stdio.h>
int main(int argc, char *argv[])
{
      int num;
      long int i =1;
      int result;
  printf("Enter a number:\n");
  scanf("%d", &num);
  

  for(i = 1; i<=999999999999999999; i++)
    {
      result = num*i;
      printf("%d x %d = %d\n", num, i, result);
    }
              getchar();
   return 0;
}
