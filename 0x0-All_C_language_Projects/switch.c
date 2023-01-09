#include <stdio.h>
int main()
{

        int customersChoice;

        printf("Welcome, please choose from the menu below\n\n");
        printf(" 1. Chicken pepper soup\n 2. Egg toast\n 3. Fruit salads\n 4. Cassava, ewa garri\n\n");
        
        printf("Enter 1, 2, 3 or 4:\n");
        scanf("%d", &customersChoice);

        switch (customersChoice)
        {
                case 1:
                        printf("You selected Chicken pepper soup\n");
                        break;
                case 2:
                        printf("You selected Egg toast\n");
                        break;
                case 3:
                        printf("You selected Fruit salads\n");
                        break;
                case 4:
                        printf("You are a comrade\n");
                        break;
                default:
                        printf("You entered a wrong input\nExiting...");
                        break;
        }                

        return 0;
}
