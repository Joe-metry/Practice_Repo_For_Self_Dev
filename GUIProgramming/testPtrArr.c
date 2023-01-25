#include <stdio.h>
void main (void)

{
 int a[10];
 int count;
 int x;

 for (count = 0; count < 10; count++)
 {
 a[count] = count * 10 + count;
 printf("a[count] = %d\n", a[count]);
 }
 printf ("The first and second elements of a are %d and %d\n", 
 a[0], a[1]);
 printf ("Or, as pointers, %d and %d %d %d %d %d %d %d %d %d\n", *a, *(a+1), *(a+2), *(a+3), *(a+4), *(a+5), *(a+6), *(a+7), *(a+8), *(a+9));
}
