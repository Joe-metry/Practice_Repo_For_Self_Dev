#include <stdio.h>

int sum_diff(int a, int b, int *sub, int *division)
{
	int sum;
	sum = a + b;

	*sub = a - b;

	*division = a/b;

	return sum;
}

int main(int argc, char *argv[])
{
	printf("C practice\n");
	
		int x = 64;
		int y = 8;
		int diff;
		int div;

		printf("The sum of %d and %d = %d\n", x, y, sum_diff(64, 8, &diff, &div));

		printf("\nThe difference of %d and %d = %d", x, y, diff);

		printf("\nThe division of %d by %d = %d", x, y, div);
      return 0;
}
