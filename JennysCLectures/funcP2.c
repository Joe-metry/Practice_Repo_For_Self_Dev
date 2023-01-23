#include <stdio.h>

/* This practice is on Calling a Function within a Function
 * I will be calling an addition function within a multiplication function
 */

void add()
{
int u,v,sum=0;

printf("What numbers would you like to sum?\n\nEnter the numbers here: \n");
scanf("%d %d",&u, &v);
sum = u+v;
printf("The sum of %d and %d is: %d", u, v, sum);

putchar('\n');
}


void mul()
{
int x, y, z, mul=0;
printf("Enter the three numbers you would like to multiply here: \n" );
scanf("%d %d %d", &x, &y, &z);

mul = x * y * z;

printf("The multiplication of %d, %d and %d is: %d", x, y, z, mul);
putchar('\n');

add();
}

int main(int argc, char *argv[])
{
printf("My journey in learning C is gradually advancing haha\n");

mul();

putchar('\n');
printf("Hakunamatata");


  return 0;
}
