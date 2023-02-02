#include <stdio.h>
#define N 90

/* This program is going to be about the addition
   and subtraction of any given matrix.
   First the user would be prompted to enter the
   dimention of the matrix, before being asked to enter
   the elements of the matrix for the addition and
   Subtraction operation respectively.
   */

int main(int argc, char *argv[])
{
  int arr1[N][N], arr2[N][N], i, j, a, b, m, n, sumM[N][N], subM[N][N];

  printf("Enter the dimension of the matrix below:\n");
  scanf("%d%d",&a, &b);

  printf("Enter the dimension of the matrix below:\n");
  scanf("%d%d",&m, &n);

  if(a!=m && b!=n)
  {
    printf("This addition or subtraction of the entered matrices is impossible since they both have different dimension"); 
  }
  else
  {

  printf("Enter the elements of the first matrix:\n");
  for(i=0; i<a; i++)
    {
      for(j=0; j<b; j++)
        {
           scanf("%d", &arr1[i][j]); 
        }
    }

  printf("Enter the elements of the second matrix:\n");
  for(i=0; i<m; i++)
    {
      for(j=0; j<n; j++)
        {
           scanf("%d", &arr2[i][j]); 
        }
    }

printf("The elements entered for the first matrix are:\n");

  for(i=0; i<a; i++)
    {
      for(j=0; j<b; j++)
        {
           printf("%d\t", arr1[i][j]); 
        }
      putchar('\n');
    }
  printf("The elements entered for the second matrix are:\n");
  for(i=0; i<m; i++)
    {
      for(j=0; j<n; j++)
        {
           printf("%d\t", arr2[i][j]); 
        }
      putchar('\n');
    }

      printf("The result of adding the entered matrix is:\n");
  for(i=0; i<a; i++)
    {
      for(j=0; j<n; j++)
        {
           sumM[i][j] = arr1[i][j] + arr2[i][j];
           printf("%d\t", sumM[i][j]); 
        }
      putchar('\n');
    }

    printf("The result of subtracting the entered matrix is:\n");
  for(i=0; i<a; i++)
    {
      for(j=0; j<n; j++)
        {
           subM[i][j] = arr1[i][j] - arr2[i][j];
           printf("%d\t", subM[i][j]); 
        }
      putchar('\n');
      }
  }
  
  return 0;

  }
