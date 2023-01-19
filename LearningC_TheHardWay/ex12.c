#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc == 1)
	{
		printf("You have only one argument. You suck\n");
	}

	else if(argc > 1 && argc < 4)
	{
		printf("Here is your arguments:\n");
	
	for(i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}

	putchar('\n');

	}

	else
	{
		printf("You have too many arguments. You suck!");
	}

     return 0;


}
