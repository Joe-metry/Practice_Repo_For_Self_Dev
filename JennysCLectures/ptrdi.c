#include <stdio.h>

int main(int argc, char *argv[])
{
	int a=10, b=9, c;
	int *p, *q;
	p = &a, q = &b;
	c = *q;
	//*p = 20;
	
	printf("Value of a is : %d\n", a);
	printf("Value of a through dereferencing is : %d\n\n", *p);

	printf("Address of a = value of *p is : %x\n", &a);
	printf("Value of *P = address of a is : %x\n", p);
	printf("Address of p is : %x\n\n", &p);

	printf("Value of b is : %d\n", b);
	printf("Value of b through dereferencing is : %d\n", *q);

	printf("Address of b = value of *q is : %x\n", &b);
	printf("Value of *q = address of b is : %x", q);
	printf("\nAddress of q is : %x\n\n", &q);

	*p = 20;
	printf("\nNew value of a is : %d", a);
	printf("\nNew value of a through dereferencing is : %d", *p);
	printf("\nNew address of a = value of p is : %x\n", p);
	 printf("New address of p is : %x", &p);
return 0;
}
