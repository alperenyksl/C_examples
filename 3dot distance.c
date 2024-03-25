#include <stdio.h>
#include <math.h>
struct Point3D {
    int x;
    int y;
    int z;
};
double distance(struct Point3D p1, struct Point3D p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2) + pow((p2.z - p1.z), 2));
}
int main() 
{
    struct Point3D points[5];
    int i, j;
    double min_distance, dist;
    for (i = 0; i < 5; i++) 
	{
        printf("Enter %d. Point (x,y,z): ", i+1);
        scanf("%d %d %d", &points[i].x, &points[i].y, &points[i].z);
    }
    min_distance = distance(points[0], points[1]);
    for (i = 0; i < 4; i++) 
	{
        for (j = i+1; j < 5; j++) {
            dist = distance(points[i], points[j]);
            if (dist < min_distance)
                min_distance = dist;
        }
    }
    printf("Closest points are ");
    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 5; j++) 
		{
            dist = distance(points[i], points[j]);
            if (dist == min_distance)
                printf("Point-%d and Point-%d ", i+1, j+1);
        }
    }
    printf("Distance between them = %.3f\n", min_distance);

    return 0;
}
