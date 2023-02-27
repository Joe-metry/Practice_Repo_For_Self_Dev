#include <stdio.h>

/* In this program, I will be applying the glean knowledge
 * from Jenny's C-Lang Lectures on structures.
 * Structures are user defined data type unlike arrays that
 * are derived data types and (int, char, float & double)
 * that are primitive data types.
 * They are used to gather homogenous data keeping it under
 * a single structure tag.
 * Keywords to note about structures are Tag, members and
 * objects, all of which will be used accordingly in this
 * program.
 **
 * The same program that introduces my learning curve on C
 * about structures will be implemented here but with some
 * run-time intialization.
 */

	struct PresCan //Prescan is the structure tag.
{
	int Age;
	char name[35];
	char party[40]; //Here, Age, name, party and grade are structure members.
	char grade;
	float score;
}PO;

/*PO = {61,"Peter Gregory Obi","Labour Party L.P",'A',91.1}; //Here PO, Bat and AA are all objects of the structure.
 struct PresCan Bat = {86,"Bola Ahmed Tinubu", "All progressive party APC",'F', 14.89};
 struct PresCan AA = {76,"Atiku Abubakar", "People's Democratic Party pdp",'C', 50.67};*/

int main(int argc, char *argv[])
{
	printf("Please enter the data of the best candidate:\n");
	scanf("%d %s %s %c %f", &PO.Age, PO.name, PO.party, &PO.grade, &PO.score);
        printf("\nThe data of the best candidate is:");
	printf("\nAge: %d\nName: %s\nParty: %s\nGrade: %c and \nScore: %f\n", PO.Age, PO.name, PO.party, PO.grade, PO.score);

/*      printf("\nThe data of the first criminal candidate is:");
	printf("\nAge: %d, Name: %s, Party: %s, Grade: %c and Score: %f\n", Bat.Age, Bat.name, Bat.party, Bat.grade, Bat.score);

	printf("\nThe data of the second criminal candidate is:\n");
	printf("Age: %d, Name: %s, Party: %s, Grade: %c and Score: %f", AA.Age, AA.name, AA.party, AA.grade, AA.score);*/

   return 0;
}

