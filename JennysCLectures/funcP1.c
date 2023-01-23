#include <stdio.h>

/* This is a my practics on functions, from Jenny's Lectures.
 * This function multiplies two numbers, and returns nothing. */

void mul()
{
    int a,b, mul=0;
    printf("enter two numbers :\n");
    scanf("%d %d", &a, &b);
    mul=a*b;
    printf("mul = %d",mul);

}

int main(int argc, char *argv[])
{
    printf("Namaste World\n");
	printf("I am learning how to use functions, and I have just called one now to multiply two numbers for me\n");
    mul();
    
    putchar('\n');

	printf("\nAsantasana\n");

	mul();
	putchar('\n');
	printf("Thanks again, bye...");

  return 0;
}
