#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    FILE* fp;
    fp=fopen("Source.txt", "r");
    char ln[100],name1[100],*name;
    int year1 = 0,year;
    float point1 = 0,point;
    while (fgets(ln, 100, fp) != NULL) 
	{
        name = strtok(ln, " ");
        year = atoi(strtok(NULL, " "));
        point = atof(strtok(NULL, " "));
        if (point > point1) 
		{
            strcpy(name1, name);
            year1 = year;
            point1 = point;
        }
    }
    printf("The movie with the highest IMDB rating is %s %d , with %f points.", name1,year1,point1);
    fclose(fp);
    return 0;
}
