#include <stdio.h>

int jumble(int x, int y)
{
	x = 2 * x + y;

	return x;
}

int main(int arc, char *argv[])
{
	int x = 2; int y =5;

	y = jumble(y,x);
	x = jumble(y,x);

	printf("%d\n", x);

  return 0;
}
