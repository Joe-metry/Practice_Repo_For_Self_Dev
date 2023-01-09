#include <stdio.h>

int main()
{

	int customersChoice;

	printf("Welcome, please choose from the menu below\n\n");
	printf(" 1. Chicken pepper soup\n 2. Egg toast\n 3. Fruit salads\n 4. Cassava, ewa garri\n\n");

	//int customersChoice;
 	
	printf("Enter 1, 2, 3 or 4:\n");
	scanf("%d", &customersChoice);

	if (customersChoice == 1)
	{
		printf("You selected Chicken pepper soup\n");
	}
	else if (customersChoice == 2)
	{
		printf("You selected Egg toast\n");
	}
	else if (customersChoice == 3)
	{
		printf("You selected Fruit salads\n");
	}
	else if (customersChoice == 4)
	{
		printf("You are a comrade\n");
	}
	else
	{
		printf("You entered a wrong input\n Exiting...");
	}

	return 0;
}
