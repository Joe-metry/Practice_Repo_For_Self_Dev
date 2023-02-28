#include <stdio.h>

/* In this program, I will be applying the knowledge
 * gleaned from Jenny's Lecture on structures.
 * This program is strictly going to be about 
 * structures pointers.
 * But first, structure pointers contain the address 
 * of the memory block housing the structure members
 * and this address are stored to the pointer through
 * the object address.
 * Structure pointers are just an alternative method
 * of accessing the content of the structure members.
 */

	struct polls
	{
		char patName[40];
		int statesWon;
		float rate;
	};
	
	//struct polls E[3];
	struct polls *ptr = &E;

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
			printf("Party Name: %s, States Won: %d, Acceptance Rate: %.3f.\n", ptr[i]->patName, ptr[i]->statesWon, ptr[i]->rate);
		}
		putchar('\n');
}
