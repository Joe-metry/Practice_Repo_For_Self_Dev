#include <stdio.h>

	/* On this program, I will be writing a function that takes one argument.
	 * It then tells if the input is odd or even.
	 * It displays the output to the user.
	 */

void OddEven();

int main(int argc, char *argv[])
{

		OddEven();

	printf("\nLet me see what I can do with this result you just gave now");
	
   return 0;
}

void OddEven()
{	
	int x;
	printf("Enter the numbers you wish to check if it's odd or even here:\n");
	scanf("%d", &x);

	if(x % 2 == 0)
	{
		printf("The number you entered is even, that is; %d / 2 produces no remainder\n", x);
	}
	else
	{
		printf("The number %d you enter is odd and weird, so are you\n", x);
	}

}
