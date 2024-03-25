#include <stdio.h>
#include <ctype.h>
int myisdigit(const char const *digits );
int main()
{	
	char isdigit;
	printf("Please enter the character:");
	scanf(" %c",&isdigit);
	
	if(myisdigit(&isdigit)==1)
	{
		printf("This character is digit.");		
	}
	else
	{
		printf("This character is not digit.");
	}
	return 0;
}
int myisdigit(const char const *digitis )
{
        if (*(digitis) >= '0' && *(digitis) <= '9')
            return 1;
        else
        {
        	return 0;
		}
}
