#include <stdio.h>
void findOddEven( int number, int *oddptr, int *evenptr );

int main()
{
    int integer;
    int odd;
    int even;
    printf(" \n  Enter an integer:");
    scanf("%d",&integer);
    printf("----------------------------");
    findOddEven(integer,&odd,&even);
    printf(" \n  Number of odd digits in %d =%d",integer,odd);
    printf(" \n  Number of odd digits in %d =%d",integer,even);
    return 0;
}
void findOddEven( int number, int *oddptr, int *evenptr )
{
	int digit;
	while(number!=0)
	{
		digit=number%10;
		if(digit%2==0)
		{
			(*evenptr)++;
		}
		else
		{
			(*oddptr)++;
		}
	number=(number-digit)/10;
	}
}
