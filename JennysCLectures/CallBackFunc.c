#include <stdio.h>

/* In this program, we would be employing the concept
 * of function pointer as part of our application of 
 * this concept.
 ** This concept woukld be applied on callback function,
 ** which means passing functions(the call back functions)
 ** as arguments into another function ( the function defined
 ** to recieve the addressess of the call back functions as
 ** arguments).
 ** We would be using a simple multipliction and addition
 ** function as our call back function.
 */
	//Bellow is the defination of the two call back functions:
	
	int mult(int x, int y)
	{
		int mult;
		mult = x*y;
		return mult;
	}

		int sum(int x, int y)
	{
		int sum;
		sum = x+y;
		return sum;
	}

	/*Below, is the defination of the function to accept the addresses of the
	 above two functions as arguments when called in main function.*/
	
	int FuncAsArg(int (*Funcptr)(int, int))
	{
		(*Funcptr)(11, 10);
	}

int main(int argc, char *argv[])
{
	int a, b;
	a = FuncAsArg(&mult);
	b = FuncAsArg(&sum);
	printf("Mult = %d\n", a);
	printf("Sum = %d\n", b);

         return 0;
}
