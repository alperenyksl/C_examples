#include <stdio.h>
#include <stdlib.h>
struct employee
{
	char name[30];
	int roll;
	float perc;
};
int main()
{
	struct employee *pstd;
	int n,i;
	printf("Enter total number of elements: ");
	scanf("%d",&n);
	pstd = (struct employee*) calloc (n,sizeof(struct employee));	
	if(pstd==NULL)
	{
		printf("Insufficient Memory,Exiting... \n");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter detail of employee [%3d]:\n",i+1);
		printf("Enter name: ");
		scanf(" ");
		gets((pstd+i)->name);
		printf("Enter roll number: ");
		scanf("%d",&(pstd+i)->roll);
		printf("Enter percentage: ");
		scanf("%f",&(pstd+i)->perc);
	}
	printf("\nEntered details are:\n");
	for(i=0;i<n;i++)
		printf("%30s \t %5d \t %.2f\n",(pstd+i)->name,(pstd+i)->roll,(pstd+i)->perc);
	return 0;
}

