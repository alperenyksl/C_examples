#include <stdio.h>
struct POINT
{
	int x;
	int y;
	
};
int main()
{
	struct POINT p;
	p.x=234;
	p.y=987;
	printf("x=%d\n y=%d",p.x,p.y);
	return 0;
}