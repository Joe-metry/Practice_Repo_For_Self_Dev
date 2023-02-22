#include <stdio.h>


/* In this program, I will be writing a function that
 * finds the factorial of any given number at run time.
 * This function will then be called in the main method
 * to perform the tasks of finding factorial.
 */

long unsigned int Fac() //Defination of the factorial function. 
{
  unsigned int i, R=1, num;
  printf("Which number would you like to fine the factorial?\n: ");
  scanf("%d", &num);
  for(i = num; i>0; i--)
    {
      R = i*R;
    }
  return R;
}
int main(int argc, char *argv[]) 
{
  long unsigned int Result;
  Result = Fac();
  printf(" The factorial of the entered number is: %d\n", Result);
  return 0;
}
