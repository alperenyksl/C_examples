#include <stdio.h>

void sort3(float *x, float *y, float *z);

int main() {
    float z;
    float x;
    float y;
    printf("Enter 3 numbers:");
    scanf("%f %f %f", &x, &y, &z);
    sort3(&x, &y, &z);
    printf("After sorting= %.2f %.2f %.2f", x, y, z);
    return 0;
}

void sort3(float *x, float *y, float *z) {
    float temp;
    if (*x > *y && *x > *z) {
        if (*y > *z) {
            temp = *x;
            *x = *z;
            *z = temp;
        } else {
            temp = *x;
            *x = *y;
            *y = *z;
            *z = temp;
        }
    } else if (*x > *y && *x < *z) {
        temp = *y;
        *y = *x;
        *x = temp;
    } else if (*x < *y && *x < *z) {
        if (*y < *z) {
            temp = *z;
            *z = *y;
            *y = temp;
        } else {
            temp = *z;
            *z = *y;
            *y = *x;
            *x = temp;
        }
    } else if (*x < *y && *z < *x) {
        temp = *z;
        *z = *y;
        *y = *x;
        *x = temp;
    }
}
