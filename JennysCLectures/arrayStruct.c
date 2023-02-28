#include <stdio.h>

/* In this program, I will be applying the knowledge
 * gaineded from Jenny's Lecture on structures.
 * This program is strictly going to be about array of 
 * structures.
 * But first, we need array of structures when the 
 * structure objects are large, just as we need structures
 * when we have to organise heterogenous data.
 */

	struct polls
	{
		char patName[40];
		int statesWon;
		float rate;
	};
	
	struct polls E[3];

int main(int argc, char *argv[])
{
	printf("Enter data of the parties\n");
	int i;
	for(i = 0; i < 3; i++)
	{
		scanf("%s %d %f", E[i].patName, &E[i].statesWon, &E[i].rate);
	}
		printf("\nThe data for Labour party;\n PDP; &\n APC;\n  is:\n");

		for(i = 0; i < 3; i++)
		{
			printf("Party Name: %s, States Won: %d, Acceptance Rate: %.3f.\n", E[i].patName, E[i].statesWon, E[i].rate);
		}
		putchar('\n');
}
