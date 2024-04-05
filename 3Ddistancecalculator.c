#include <stdio.h>
#include <math.h>
struct Point3D{
	int x;
	int y;
	int z;
};


int main()
{
	struct Point3D points[5];
	for(int i=0;i<5;i++)
{
	printf("\n Enter %d . point (x,y,z):",i+1);
  scanf("%d%d%d", &points[i].x , &points[i].y , &points[i].z);

}

float min;
int nokta1=0;
int nokta2=1;
float distancex;
float distancey;
float distancez;
float total;

distancex= (((points[0].x)-(points[1].x))*((points[0].x)-(points[1].x)))*1.00;
    	 distancey= (((points[0].y)-(points[1].y))*((points[0].y)-(points[1].y)))*1.00;
    	 distancez= (((points[0].z)-(points[1].z))*((points[0].z)-(points[1].z)))*1.00;
    	 min= sqrt(distancex+distancey+distancez);

for(int a=0;a<5;a++)
{
	for(int b=0;b<5;b++)
	{
    	 distancex= (((points[a].x)-(points[b].x))*((points[a].x)-(points[b].x)))*1.00;
    	 distancey= (((points[a].y)-(points[b].y))*((points[a].y)-(points[b].y)))*1.00;
    	 distancez= (((points[a].z)-(points[b].z))*((points[a].z)-(points[b].z)))*1.00;
    	 total= sqrt(distancex+distancey+distancez);
    	 if(a==b)
    	 {
    	 	continue;
    	
		 }
		if(min>total)
		{
			nokta1=a;
			nokta2=b;
			min=total;
		}
	}
}
printf("Closest points are Point- %d and Point- %d Distance between them = %lf",nokta1,nokta2,min);
return 0;
}
