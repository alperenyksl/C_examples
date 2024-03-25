#include <stdio.h>
//Sum of two numbers with using pointer.
//Simple example
int main()
{
    int *aptr;
    int a;
    aptr=&a;
    int b;
    int *bptr;
    bptr=&b;
    printf("Please enter the first number:");
    scanf("%d",&a);
    printf("Please enter the second number:");
    scanf("%d",&b);
    printf("%d is our sum.",*aptr+*bptr);
    return 0;    
}
