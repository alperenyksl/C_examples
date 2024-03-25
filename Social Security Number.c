#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100
int main() 
{
    FILE *fp1, *fp2, *fp3;
    char ssn[MAX_LEN];
    int found;
    fp1 = fopen("S1.txt", "r");
    if (fp1 == NULL) 
	{
        printf("Error: could not open S1.txt.\n");
        exit(1);
    }
    fp2 = fopen("S2.txt", "r");
    if (fp2 == NULL) 
	{
        printf("Error: could not open S2.txt.\n");
        exit(1);
    }
    fp3 = fopen("S3.txt", "w");
    if (fp3 == NULL) 
	{
        printf("Error: could not create S3.txt.\n");
        exit(1);
    }
    while (fgets(ssn, MAX_LEN, fp1) != NULL) 
	{
        ssn[strlen(ssn) - 1] = '\0';
        rewind(fp2);
        while (fgets(ssn, MAX_LEN, fp2) != NULL) 
            if (strcmp(ssn, ssn) == 0) 
            {
                found = 1;
                break;
           	}
        if (found)
            fprintf(fp3, "%s\n", ssn);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("Common SSNs saved to S3.txt.\n");
    return 0;
}

