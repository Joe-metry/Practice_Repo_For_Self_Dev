#include <stdio.h>

int main(int argc, int argv[])
{
	int a = 3703701;

	int *ptr_to_a = &a;
	//ptr_to_a = &a;

	printf("a value %d\n", a);
	printf("pointer to a gives the same value as the value of a: %d\n", *ptr_to_a);
	printf("now address of the a value is: %x\n", &a);
	printf("another way to obtain the value of a %x", ptr_to_a);


   return 0;
}
