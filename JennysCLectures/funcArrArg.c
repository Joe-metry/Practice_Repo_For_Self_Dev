#include <stdio.h>

/* In this program, I will be calculating the average of the marks
 * of a given number of students.
 * The purpose of this program is to familiarize myself with calling
 * a function with an array as the argument.
 *
 ** Since an array is basically an internal pointer, we can define
 ** a function that recieves an array as an argument referencing the 
 ** array as a pointer. same is applicable to an array of charracters
 ** i.e a string.
 */

	float ave(int *, int);

int main(int argc, char *argv[])
{
	int marks[]={97, 96, 93, 94, 95, 4, 35, 74, 90, 98, 92, 99, 91, 89}, size;
	float avg =0;
	size = sizeof (marks)/sizeof (marks[0]);
	avg = ave(marks, size);
	printf("The average marks is: %f && size is: %d\n", avg, size);
	printf("\nThe size of marks array is: %d\n", sizeof(marks));
	
   return 0;
}

	float ave(int *arr, int size)
{
	int sum=0, i;
	float average =0;
	for(i=0; i<size; i++)
	{
		sum+=arr[i];
	}
		average = (float) sum/size;

		printf("The size of ave function array is: %d\n", sizeof(arr));
		return average;
		
}
