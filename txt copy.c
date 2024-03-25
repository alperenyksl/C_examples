#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *fp_source, *fp_target;
    char ch;
    fp_source = fopen("Source.txt", "r");
    if (fp_source == NULL) 
	{
        printf("Error: could not open Source.txt.\n");
        exit(1);
    }
    fp_target = fopen("Target.txt", "w");
    if (fp_target == NULL) 
	{
        printf("Error: could not create Target.txt.\n");
        exit(1);
    }
    while ((ch = fgetc(fp_source)) != EOF) 
        fputc(ch, fp_target);
    fclose(fp_source);
    fclose(fp_target);
    printf("File copied successfully.\n");
    return 0;
}

