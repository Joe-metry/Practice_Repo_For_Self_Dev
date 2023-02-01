#include <stdio.h>

/* A new program on arrays to take in elements for a 
 * 2 Dimensional array using the scanf function, and
 * printing them out in a tabular or matrix form.
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
      putchar('\n');
  for(i=0; i<4; i++)
    {
      for(j=0; j<6; j++)
        {
          printf(" %d ", _2Darr[i][j]);
        }
      putchar('\n');
      //putchar('\n');
    } 
  
  return 0;
}
