#include <stdio.h>

/* This program is about functions and their return type.
 * Here we will be returning a pointer as part of our
 * series on C, with Jenny's lectures.
 * From this series, we learnt that the name of an array,
 * is basically a pointer to the first element of the 
 * array. This is also true for a character array, known
 * also as a String.
 */

int *ptrArithm(int *, int L);

int main(int argc, char *argv[])
{
	int arr[] = {12, 8, 1, 3, 7, 91, 2, 3}, a, *PArthm;
	a = sizeof(arr)/sizeof(arr[0]) - arr[3];

	PArthm = ptrArithm(arr, a);
	printf("The value of a is: %d\n\n", a);
	printf("After pointer arithmetics, using indirection operation, PArthm is: %d\n", *PArthm);
    return 0;
}

/* Below is the defination of a simple function that
 * performs some pointer arithmetics
 */
int *ptrArithm( int *Arithm, int L)
{
//	int i;
 //for(i=0; i<L; i++)
 //{
	Arithm += L;//Arithm[i];

	return Arithm;
 //}
}
