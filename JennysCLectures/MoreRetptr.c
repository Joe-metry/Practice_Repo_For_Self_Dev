#include <stdio.h>


/* In this program I will be digging more on functions
 * whose return type is a pointer.
 * From my practice with Jayanti Khatri Lamba, I have
 * been made to understand that returning a pointer is
 * the same as return an address.
 ** Also even when we pass an array as an argument, the
 ** name of the array passed is interpreted as an internal
 ** pointer to the first element of the array, making it 
 ** match with the function defination containing a pointer
 ** as a parameter or maybe even an array whose name is
 ** inverably also a pointer to the first element or simply
 ** an internal pointer.
 */

	int* Retptr(int*); // Function declaration.

int main(int argc, char *Argv[])
{
	int arr[]={5, 47, 89, 90, 91}, *Pptr;

	Pptr = Retptr(arr);
	printf("The dereferenced value from moving the address two places is: %d\n", *Pptr); 
	return 0;
}

	int* Retptr(int* PtrArg) // Function Defination.
{
	PtrArg += 2;
	return PtrArg;
}
