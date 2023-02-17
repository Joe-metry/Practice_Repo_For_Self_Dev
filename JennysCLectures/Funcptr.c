#include <stdio.h>

/* This program is going to be about function pointers,
 * a new concepts learnt from my C series with Jayanti
 * Khatri Lamba.
 *
 ** First I will be be calling the function using it's
 ** name as I have learnt from the orthodox function
 ** calling method, and then call it using the function's
 ** pointer, which is the new concept learnt today.
 *
 *** The function in question would be a simple method
 *** to find the product of two intergers.
 */

int prod(int, int); // Declaration of the function to perform product operation on two intergers.

int main(int argc, char *argv[])
{
 int (*prodptr)(int, int) = &prod; // This is the declaration and intialization of our funtion pointer on the product of two interger funtion named prod.
 int Pr = 0, Ppr = 0;

 Pr = prod(10, 10);
 Ppr = (*prodptr)(10, 10);

 printf("The product result from calling the function using the function's name is: %d\n\n", Pr);
 printf("The product result from calling the function using the function pointer is: %d\n", Ppr);

    return 0;
}

// Below is the defination of the function to perform a product operation on two intergers.
int prod(int a, int b)
{
	int mul;
	mul = a * b;
	return mul;
}
