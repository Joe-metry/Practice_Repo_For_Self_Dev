#include <stdio.h>

/*In this program, I will be designing a simple arithmetic
* calculator, but rather than 
* using the switch function, I will be using 
* function pointers to call the 
* different functions where each of the various
* Arithmetic operation is defined.
** What really happens here is that the function
** pointer will be used as an array of function
** pointers.
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

  void (*ArithFptr[])(int, int) = {sum, mult, diff, div};
  (*ArithFptr[choice])(a,b);
  return 0;
}
