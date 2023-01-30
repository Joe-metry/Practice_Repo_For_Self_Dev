#include <stdio.h>

int main(int argc, char *argv[])
{
int i;
for(i=10; i>=0; i--)
{
	int j;
	for(j=0; j<=i; j++)
	{
		printf("*$#");
	}
	putchar('\n');
}
     return 0;
}
