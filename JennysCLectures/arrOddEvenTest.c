#include <stdio.h>


/* In this program, I will be asking the user to input 10 elements into an array,
 * and would then tell te user how many of these entered numbers are odd or even.
 */

int main(int argc, char *argv[])
{
	int i, odd=0, even=0, oe[10];
	printf("Please enter any ten integers");
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &oe[i]);
	}

	for(i=0; i<10; i++)
	{
		if(oe[i] % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("The total number of even elements are: %d", even);
	printf("\n\nWhile the total number of odd elements are: %d", odd);

  return 0;
}
