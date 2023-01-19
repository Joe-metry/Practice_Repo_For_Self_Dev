#include <stdio.h>

int main (int argc, char *argv[])
{
	int i = 0; int j = 0;

	int arr [3] [3] = {{1,2,3}, {2,3,4}, {4,5,6}};

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("arr [%d] [%d] = %d\n", i, j, arr [i] [j]);
		}
	}


     return 0;

}
