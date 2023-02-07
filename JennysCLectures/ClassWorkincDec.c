#include <stdio.h>

/* This is an assignment from Jayanti Khatri Lamba
 * on pointers, it is centered on the increment and
 * decrements operations.
 */

int main(int argc, char *argv[])
{
	int a[] = {10, 11, -1, 56, 67, 5, 4};
	int *p, *q;
	p = a;
	q = &a[0] + 3;
	printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
	printf("%d\n", *p);
	printf("%d\n", (*p)++);
	printf("\n%d", (*p)++);
		q--;
	printf("\n%d", (*(q+2))--);
	printf("\n%d", *(p+2) -2);
	printf("\n%d", *(p++ -2) -1);
  return 0;
}
