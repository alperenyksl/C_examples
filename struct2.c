#include <stdio.h>
#include <stdlib.h>
struct POINT
{
int x;
int y;
};
int main()
{
    struct POINT *p;
    p=(struct POINT*)malloc(sizeof(struct POINT));
    if(!p)
    {
        printf("Bellek hatası.");
        return 1;
    }
    p.x=234;
    p.y=987;
    printf("x=%d\ny=%d",p.x,p.y);
    free(p);
    return 0;
}