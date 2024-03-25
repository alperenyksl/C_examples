#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student 
{
    long int ID;
    char name[31];
    char courseCode[21];
    float grade;
};
void addStudent(FILE *fp) 
{
    struct Student s;
    printf("Enter the student's ID (-1 to stop): ");
    scanf("%ld", &s.ID);
    while (s.ID != -1) 
	{
        printf("Enter the student's name: ");
        scanf("%s", s.name);
        printf("Enter the student's course code: ");
        scanf("%s", s.courseCode);
        printf("Enter the student's grade: ");
        scanf("%f", &s.grade);
        fwrite(&s, sizeof(struct Student), 1, fp);
        printf("Enter the student's ID (-1 to stop): ");
        scanf("%ld", &s.ID);
    }
}
void display(FILE *fp) 
{
    struct Student s;
    printf("%-15s %-30s %-20s %-5s\n", "ID", "Name", "Course Code", "Grade");
    while (fread(&s, sizeof(struct Student), 1, fp) == 1)
        printf("%-15ld %-30s %-20s %-5.2f\n", s.ID, s.name, s.courseCode, s.grade);
}
int main() 
{
    int choice;
    FILE *fp;
    fp = fopen("students.dat", "wb");
    if (fp == NULL) 
	{
        printf("Error opening file\n");
        return 1;
    }
    fclose(fp);
    fp = fopen("students.dat", "rb");
    if (fp == NULL) 
	{
        printf("Error opening file\n");
        return 1;
    }
    do 
	{
        printf("\nMENU:\n");
        printf("0 - Add new student\n");
        printf("1 - Display all students\n");
        printf("2 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
		{
            case 0:
                addStudent(fp);
                break;
            case 1:
                display(fp);
                break;
            case 2:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 2);
    fclose(fp);
    return 0;
}

