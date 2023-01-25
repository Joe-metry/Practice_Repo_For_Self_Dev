#include <stdio.h>
#include <math.h>

/* The function with pointer parameters is defined below just above the
 * main function, from line 10 to line 15
 * When called this function performs some basic calculations like;
 * addition, modulo, power of and multiplication.
 */

	int funcArithm(int x, int y, int *mod, int *mul)
{
	int add;

	add = x + y;
	*mod = x % y;
	//*pow = x (pow)y;
	*mul = (x * y);

	return add;
}
int main(int argc, char *argv[])
{
	int a = 84;
	int b = 8;
	int u, v, w;

	printf("This study is on pointer arguments passed in a function\n");
	printf("The addition of %d and %d = %d\n", a, b, funcArithm(a, b, &u, &w));
	printf("%d modulo %d = %d\n", a, b, u);
	//printf("The value of %d power %d = %d\n", a, b, v);
	printf("The multiplication of a = 84 by b = 8 is %d\n", w);

	printf("This code is on functions with pointer parameters");

	return 0;
}
