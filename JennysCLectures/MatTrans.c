#include <stdio.h>

/*In this program I will asking a user to input a matrix type
 * i.e axb; and the elements accordingly.
 * and would also be dis playing the entered matrix as output,
 * before transposing this output for the user.
 * This transposed output would also be displayed for the user'
 */

int main(int argc, char *argv[])
{
  int matTrans[3][5], i, j, a, b;
  printf("What matrix do you want to transpose? example; axb :\n");
  scanf("%d%d",&a,&b);
  
  printf("\nEnter the elements of the %dx%d matrix:\n", a, b);
  for(i=0; i<3; i++)
    {
      for(j=0; j<5; j++)
        {
          scanf("%d", &matTrans[i][j]);
        }
    }

  printf("\nThe %dx%d matrix entered to be transposed is:\n\n", a, b);
  for(i=0; i<3; i++)
    {
      for(j=0; j<5; j++)
        {
          printf("%d\t", matTrans[i][j]);
        }
      putchar('\n');
    }
  
  printf("\n\nThe %dx%d entered matrix has been transpose to %dx%d below:\n\n", a, b, b, a);
  
  for(i=0; i<5; i++)
    {
      for(j=0; j<3; j++)
        {
          printf("%d\t", matTrans[j][i]);
        }
      putchar('\n');
    }
  return 0;
}
