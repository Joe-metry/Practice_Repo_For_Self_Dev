#include <stdio.h>

/* In this program, I will be asking a user to supply
 * 10 elements for each of the two arrays I will be making.
 * I will then take the sum of the elements in the corresponding
 * indexes from index 0-9 for both arrays and store in a third array.
 * finally, I will find the average of the elements in the third array.
 */

int main(int argc, char *argv[])
{
	int arr1[10], arr2[10], i, sumarr[10];
  float average, TotSumArr = 0;
	printf("Enter any ten elements for the first array: \n");

	for(i=0; i<10; i++)
	{
		scanf("%d", &arr1[i]);
	}

	printf("\nEnter any ten elements for the second array: \n\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr2[i]);
	}

		putchar('\n');

	for(i=0; i<10; i++)
	{
		sumarr[i] = arr1[i] + arr2[i];

    TotSumArr = TotSumArr + sumarr[i];
		printf("sumarr[%d] = %d\n", i, sumarr[i]);
	}

  average = TotSumArr / 10.0;
  printf("\n\nThe average of the 3rd array obtained by adding the first two arrays is = %f", average);

   return 0;
}
