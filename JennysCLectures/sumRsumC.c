#include <stdio.h>

/* In this program, I will be asking a user to input 
elements of a desired matrix, and would then sum the
individual rows and colums as output, after displayingthe entered matrix for the user.
*/

int main(int argc, char *argv[])
{
  int matrix[4][4], i, j, sumR, sumC;
  
  printf("\nEnter the elements of the 4x6 matrix:\n");
  for(i=0; i<4; i++)
    {
      for(j=0; j<4; j++)
        {
          scanf("%d", &matrix[i][j]);
        }
    }

  printf("\nThe matrix entered is:\n\n");
  for(i=0; i<4; i++)
    {
      for(j=0; j<4; j++)
        {
          printf("%d\t", matrix[i][j]);
        }
      putchar('\n');
    }
  
  printf("\n\nThe sum of the individual rows and columns of the entered matrix is:\n\n");
  
  for(i=0; i<4; i++)
    {
    sumR = sumC = 0;
      
      for(j=0; j<4; j++)
        {
          sumR = sumR + matrix[i][j];
          sumC = sumC + matrix[j][i];
        }
      printf("sumR = %d\t, sumC = %d", sumR, sumC);
      putchar('\n');
    }
  return 0;
}
