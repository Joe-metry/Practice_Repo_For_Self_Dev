#include <stdio.h>

/* In this program I will be recieving a string as an argument
 * when the function is being called.
 *
 
 ** This program will be to find the length of a string, and also
 ** to replace a character from a string.

 */

	void strFunc(char *, char*);

int main(int argc, char *argv[])
{
	char Cstr[] = "Joemetry";
		strFunc(Cstr, Cstr);
   return 0;
}

	void strFunc( char *CharArr, char *CharArr1)
{
	int i, length=0;
	for(i = 0; CharArr[i] != '\0'; i++)
	{
		length += 1;
	}
	CharArr1[7] = 'i';

	printf("The length of the string is: %d\n", length);
	printf("\nThe string after it index seven character has been changed is: %s\n", CharArr1);
}
