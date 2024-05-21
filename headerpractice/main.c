#include <stdio.h>
#include "myheader.h"
int main(){
	int a;
	int b;
	int resultplus;
	int resultminus;
	int resultmultiply;
	float resultdivide;
	int resultmod;
	printf("\n Please enter two components (First one must be bigger than the second):");
	scanf("%d %d",&a , &b);
	if(b>a)
	{
		printf("\n Error!First one must be bigger than the second.");
		printf("\n Please enter two components (First one must be bigger than the second):");
		scanf("%d %d",&a , &b);
	}
	resultplus = plus(a,b);
	resultminus = minus(a,b);
	resultmultiply = multiply(a,b);
	resultdivide = divide(a,b);
	resultmod = mod(a,b);
	printf("\n The results are -> Plus %d , Minus %d , Multiply %d , Divide %f , Mod %d",&resultplus,&resultminus,&resultmultiply,&resultdivide,&resultmod);
	return 0;
}
