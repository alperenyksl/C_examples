#include <stdio.h>
#define CUBE_VOLUME(X)  ((X)*(X)*(X))
int main()
{	
	int integer;
	int result;
	printf("Please enter one integer for cube process: ");
	scanf("%d",&integer);
	result= CUBE_VOLUME(integer);
	printf("\n The result is: %d",result);
	return 0;
}
