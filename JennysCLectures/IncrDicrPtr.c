#include <stdio.h>

/* On this program, I will be practilizing the knowledge 
 * gotten from Pre-incremented and post-incremented pointers
 * in C.
 */

int main(int argc, char * argv[])
{
	int a[] = {3, 2, 67, 0, 56};
	int *p = a;
	printf("Post and Pre increment levels, *(++p), *++p, *(p++), *p++, %d %d %d %d\n\n", *(++p), *++p, *(p++), *p++);

	p = &a[4];
	printf("\nPost and pre decrement levels, *--p, *(--p), *p--, *(p--), %d %d %d %d", *--p, *(--p), *p--, *(p--));
	printf("\nTest increment & decrement levels, --(*p), (*p)++, ++(*p), %d %d %d",--(*p), (*p)++, ++(*p));
	
  return 0;
}
