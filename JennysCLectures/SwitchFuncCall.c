#include <stdio.h>

/*In this program, I will be designing a simple arithmetic
* calculator, using the switch function.
* The only uniqueness in this arithmetic calculator is 
* that, the switch cases will all be calling the 
* different functions where each of the various
* Arithmetic operation is defined.
*/
//Below is the defination of the various funtions to
//perform the arithmetic operations.

void sum(int x, int y)
{
  int Result;
  Result = x + y;
  printf("The sum of the two numbers entered = %d", Result);
}
void mult(int x, int y)
{
  int Result;
  Result = x * y;
  printf("The product of the two numbers entered = %d", Result);
}
void diff(int x, int y)
{
  int Result;
  Result = x - y;
  printf("The difference of the two numbers entered = %d", Result);
}
void div(int x, int y)
{
  int Result;
  Result = x / y;
  printf("The division result of the two numbers entered is = %d", Result);
}
int main() 
{
  int choice, a, b;
  printf("\nEnter your choice:\n0 == Addition.\n1 == Multiplication.\n2 == Subtraction.\n3 == Division.\n\n");
  scanf("%d", &choice);
  printf("\nEnter two numbers: \n\n"); scanf("%d%d",&a,&b);

  switch(choice)
    {
      case 0: sum(a,b); break;
      case 1: mult(a,b); break;
      case 2: diff(a,b); break;
      case 3: div(a,b); break;
      default: printf("Enter a valid choice\n");
    }
  return 0;
}
