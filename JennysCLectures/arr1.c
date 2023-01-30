#include <stdio.h>


/* In this program, I learnt to take items of an array during runtime,
 * say from user using for loop and the scanf function.
 * I also printed out this rspective values according to their index'
 * using the forloop and the printf function.
 */

int main(int argc, char * argv[])
{
	int i;
	int j[7];
	for(i=0; i<7; i++)
	{
		scanf("%d", &j[i]);
	}
	for(i=0; i<7; i++)
	{
		printf("The items in array index j[%d] = %d\n", i, j[i]);
	}

   return 0;
}
