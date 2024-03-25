#include <stdio.h>

void SwapFloats(float *aptr, float *bptr);

int main()
{
    float b, a;
    printf("Please enter the first float digit:");
    scanf("%f", &b);
    printf("Please enter the second float digit:");
    scanf("%f", &a);
    SwapFloats(&b, &a);
    printf("%f, %f are our new float digits after swap.", b, a);
    return 0;
}

void SwapFloats(float *aptr, float *bptr)
{
    float temp;
    temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;
}
