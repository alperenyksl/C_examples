#include <stdio.h>
struct Employee {
    char name[20];
    char surname[20];
    char title[20];
    int salary;
    int year_of_service;
};
int main() 
{
    struct Employee employees[3];
    int i;
    printf("Enter 3 Employees Details\n");
    for (i = 0; i < 3; i++)
	{
        printf("Employee %d:-\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Surname: ");
        scanf("%s", employees[i].surname);
        printf("Title: ");
        scanf("%s", employees[i].title);
        printf("Salary: ");
        scanf("%d", &employees[i].salary);
        printf("Year of Service: ");
        scanf("%d", &employees[i].year_of_service);
    }
    printf("3 Employees Details with Raise\n");
    for (i = 0; i < 3; i++) 
	{
        employees[i].salary += employees[i].salary * (employees[i].year_of_service / 100.0);
        printf("Name: %s, Surname: %s, New Salary: %d\n", employees[i].name, employees[i].surname, employees[i].salary);
    }

    return 0;
}

