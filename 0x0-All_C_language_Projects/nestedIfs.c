#include <stdio.h>
int main()
{
  
printf("make your selection from the menu below,\n enter 1, 2, 3 or 4 to make selection\n\n 1. Football\n 2. Formula 1\n 3. Boxing\n 4. 100m huddle race\n 5. Quit selection\n ");

int input;
  scanf("%d", &input);
  if (input==1)
  {
      printf("You have opted for football");
  }
  else if (input==2)
  {
      printf("You have opted for formula 1");
  }
  else if (input==3)
  {
      printf("You have opted for Boxing");
  }
  else if (input==4)
  {
      printf("You have opted for 100m huddle race");
  }
  else if (input==5)
  {
      printf("Do you want to quit selection? \nEnter (Y for Yes) and (N for No):\n");
  }
}
