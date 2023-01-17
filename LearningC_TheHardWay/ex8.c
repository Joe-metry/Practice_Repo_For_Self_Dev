#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {100, 12, 13, 14, 20};
	char name[] = "zed grey";
	char full_name[] = {'z', 'e', 'd', ' ', 'g', 'r', 'e', 'y', ' ', 'A', '.', ' ', 's', 'h', 'a', 'w', ' ', 'n', 'o', 't', ' ', 'l', 'u', 'k', 'e', '\0'};

	//WARNING: On some systems you may have to change the 
	//%ld in this code to a %u since it will use unsigned ints
	
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of area (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	printf("The first area is %d the 2nd %d.\n", areas[0], areas[1]);
	printf("The size of a char: %ld\n", sizeof(char));
	printf("size of name (char[]): %d\n", sizeof(name));
	printf("The number of chars in name: %ld\n", sizeof(name) / sizeof(char));
	printf("The  size of fullname (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars in fulname: %ld\n", sizeof(full_name) / sizeof(char));
	printf("name= \"%s\" and full_name= \"%s\"\n", name, full_name);


  return 0;
}
