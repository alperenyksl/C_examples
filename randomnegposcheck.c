#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void howMany(const int* const array, int* const posPtr, int* const negPtr);

int main()
{   
    int positive=0;
    int negative=0;
    srand(time(NULL));
    int array[10];
    for(int i = 0; i < 10; i++) 
    {
        array[i] = rand() %201 - 100;
    }
    printf("10 random numbers generated:");
    for(int t = 0; t < 10; t++) 
    {
        printf("%d",array[t]);
    }
    howMany(array,&positive,&negative);
    printf("\n ----------------------------------------\n");
    printf(" Number of positive integers:%d",positive);
    printf("\n Number of negative integers:%d",negative);
    return 0;
}
void howMany(const int* const array, int* const posPtr, int* const negPtr)
{
    for(int x = 0; x<10 ; x++)
    {
        if(array[x]>0)
            (*posPtr)++;
        if(array[x]<0)
            (*negPtr)++;
    }
}
