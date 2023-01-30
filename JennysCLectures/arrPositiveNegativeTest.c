#include <stdio.h>


/* In this program, I will be asking the user to input 10 elements into an array,
 * and would then tell the user how many of these entered numbers are positive or negative.
 */

int main(int argc, char *argv[])
{
	int i, zero=0, pos=0, neg=0, PN[10];
	printf("Please enter any ten integers:\n");
	
	for(i=0; i<10; i++)
	{
		scanf("%d", &PN[i]);
	
		if((PN[i] * -1) < 1 && (PN[i] * -1) != 0)
			pos++;
      
		else if((PN[i] * -1) >= 1 && (PN[i] * -1) != 0)
			neg++;

    else if((PN[i] * -1) == 0)
      zero++;
  }


	printf("The total number of positive elements are: %d", pos);
	printf("\n\nThe total number of negative elements are: %d", neg);
  	printf("\n\n%d elements are zero meaning they are neither positive or negative", zero);

  return 0;
}
