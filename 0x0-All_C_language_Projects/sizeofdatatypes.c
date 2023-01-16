#include <stdio.h>

int main(void)
{

char g='J';	
int a=10;
short int b=100;
long int c=2000;
long long int d=20000;
float e=3.1415;
double f=22./7.;
printf("size of char: %ld\n", sizeof(g));
printf("size of int: %ld\n", sizeof(a));
printf("size of short int: %ld\n"), sizeof(b);
printf("size of long int: %ld\n", sizeof(c));
printf("size of long long int: %ld\n", sizeof(d));
printf("size of float: %ld\n", sizeof(e));
printf("size of double: %ld\n", sizeof(f));

unsigned int n1=10;
unsigned short int n2=20;
unsigned long int n3=30;
unsigned long long int n4=40;

putchar('\n');

printf("num1: %u\n",n1);
printf("num2: %hu\n",n2);
printf("num1: %lu\n",n3);
printf("num1: %llu\n",n4);



return 0;
}
