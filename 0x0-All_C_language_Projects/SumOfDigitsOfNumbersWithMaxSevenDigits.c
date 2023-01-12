/*This program takes in a number and sums the individual digits, number must not exceed 7 digits.
	 * I will improve on the program later to take more than 7 digits.
	 * If one inputs 1234567, it outputs 1+2+3+4+5+6+7 = 28.
	 */

#include<stdio.h>
int main()
{
  int D1,D2,D3,D4,D5,D6, sum=0;
    printf("\nEnter 1-7 Digit No : ");
    scanf("%d",&D1);//1234567

        sum+=D1%10; //7 
        D2=D1/10; //123456
        sum+=D2%10; //6
        D3=D2/10; //12345
        sum+=D3%10; //5
        D4=D3/10; //1234
        sum+=D4%10; //4
        D5=D4/10; //123
        sum+=D5%10; //3
        D6=D5/10; //12
        sum+=D6%10; //2
        sum+=D6/10; //1
  
    printf("\nTotal : %d",sum);
    return 0;
}
