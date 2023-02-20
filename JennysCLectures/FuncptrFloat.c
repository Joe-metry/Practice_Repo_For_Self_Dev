#include <stdio.h>

/* In this program we will be digging more on function
 * pointers but this time we will be dealing with
 * the type that returns a float, and would be declaring
 * and initializing on seperate lines.
 ** We would be using a pointer that performs a simple
 ** division of two numbers.
 */

	float div(float, float); //Function declaration (A.K.A Function prototype).

int main(int argc, char *argv[])
	
{
	float (*divptr)(float, float) = &div, Result;
	
	Result = divptr(98, 21);

	printf("The result of the division of the above arguments to the division pointer are: %f\n", Result);
 return 0;
}

	float div(float x, float y) // Defination of function.
{
	return x/y;
}
