#include <stdio.h>

/* This is a practice program for pointer sum and difference
 */

int main(int argc, char *argv[])
{
	int a[] = {0,1,-1,10,11};
	int *p = &a[0];
	int *q = &a[4];
	int d;
	
	d = p - q;
	printf("value at a[0] is %d\n", *p);
	printf("value at a[4] is %d\n", *q);
	printf("%u", p);
	printf("\n\n%u", q);
	printf("\n\n%d", d);
	
	*q = 25;
	printf("\n\nvalue at a[4] now is %d", *q);

	d = q - p;
	printf("\n\nd = q - p is %d\n\n", d);

	*p = 27;
	printf("\nThe new value at a[0] is %d\n", *p);

	q = q - 3;
	printf("\n\n The new value of q is: %u", q);

	p = p + 3;
	printf("\n\n The new value of p is: %u", p);

	d = p -q;
	printf("\n\n The updated value of d = p - q is: %d", d);
	 return 0;
}
