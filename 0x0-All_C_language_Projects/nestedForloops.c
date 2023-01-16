#include <stdio.h>

int main(void)
{
    int i;
        for(i = 0; i <= 10; i++)
        {
                int k;
            for(k = i; k >= 0; k--)
            {
                printf("%i ", k);
            }
            putchar('\n');
            
        }
        
 //   printf("Hello, World!\n");

    return 0;
}
