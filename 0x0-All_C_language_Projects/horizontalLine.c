#include <stdio.h>

/* This program prints vertical broken lines on the terminal */

int main(int argc, char *argv[])
{
	int j;

	while(j <= 50)
	{
		printf("|");
		putchar('\n');
		j++;
	}
	
    return 0;
}
