#include <stdio.h>

struct Employee{
	char name[50];
	char surname[50];
	char title[50];
	double salary;
	int years_of_service;
};

int main(){
	struct Employee employees[3];
	printf("Enter 3 Employees Details\n");
	for(int i=0;i<3;i++){
		printf("Employee %d: -\n",i+1);
		printf("Name:");
		scanf("%s",employees[i].name);
		printf("Surname:");
		scanf("%s",employees[i].surname);
		printf("Title:");
		scanf("%s",employees[i].title);
		printf("Salary:");
		scanf("%lf",&employees[i].salary);
		printf("Year of service:");
		scanf("%d",&employees[i].years_of_service);
	}
	
	for(int i=0;i<3;i++){
		employees[i].salary+= employees[i].salary * (employees[i].years_of_service/100.0);
	}
	
	printf("3 Employees Details with Raise \n");
	for(int i=0; i<3 ; i++){
		printf("Name %s, Surname %s , New Salary %.2f \n", employees[i].name,employees[i].surname,employees[i].salary);
	}
	return 0;
}
