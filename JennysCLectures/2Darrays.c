#include <stdio.h>

/*In this program I will be intitializing a two dimensional
 * array during run time, using the scanf function.
 * I will be prompting the user to supply the ellements of a 4 by 6
 * array.
 */

int main(int argc, char *argv[])
{
  int _2Darr[4][6];
  int i, j;

  printf("Enter The Elements Of The 2-D array\n");
  for(i=0; i<4; i++)
    {
      for(j=0; j<6; j++)
        {
          scanf("%d", &_2Darr[i][j]);
        }
    } 

  for(i=0; i<4; i++)
    {
      for(j=0; j<6; j++)
        {
          printf("_2Darr[%d][%d] = %d\n", i, j, _2Darr[i][j]);
        }
    } 
  
  return 0;
}
