#include <stdio.h>

/* In this program, I will be taking the scores of five students
 * from a user, using the scanf function,
 * and finding the average of the marks entered.
 * I will also be returning the result to the user.
 */

int main(int argc, char *argv[])
{
	int stdscores[5];
	int i;
	float total=0;
	float average;
	printf("Enter the scores for five students:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &stdscores[i]);
	}

	for(i=0; i<5; i++)
	{
		total = total + stdscores[i];
		average = total/5.0;

	}

	//average = total/5.0;

	printf("\n\nThe average student scores is: %f", average);
	
  return 0;
}
