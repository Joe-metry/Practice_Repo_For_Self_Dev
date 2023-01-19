#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argument vector
	
	int i = 0;
	while(i < argc)
	{
		printf("arg : %d %s\n", i, argv[i]);
		i++;
	}

	//Let's make our own array of strings
	
	char *states[] = {"California", "Oregon", "Washington", "Texa"};
	
	int num_states = 4;
	i = 0;
	while(i < num_states)
	{
		printf("states : %d %s\n", i, states[i]);
		i++;
	}

   return 0;
}
