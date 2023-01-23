#include <stdio.h>

/* In this program, I am trying to exhibit what I have learnt about functions
 * It is going to encompass the declaration above the main method
 * The defination below the main method and
 * the calling of the function withing the main method.
 * Declarations of functions can be done within the main method but that is limiting.
 * So, it is best practice to declare a function above the main function/method.
 */

char fun();

int main(int argc, char *argv[])
{
  char ch;
ch = fun();
  printf("ch = %c\n", ch);
}
char fun()
{
  char c;
  printf("input character\n");
  scanf("%c", &c);

  return c;
}
