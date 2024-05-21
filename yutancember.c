#include <stdio.h>
#include <math.h>

struct Cember {
    int x;
    int y;
    double yaricap;
};

void yutaniBul(struct Cember *cember) {
    double kapsayanYaricap = sqrt(pow(cember->x, 2) + pow(cember->y, 2));
    cember->yaricap = kapsayanYaricap;
}

int main() {
    struct Cember cember;
    
    printf("Merkez noktanin x degerini giriniz: ");
    scanf("%d", &cember.x);
    printf("Merkez noktanin y degerini giriniz: ");
    scanf("%d", &cember.y);
    
    yutaniBul(&cember);
    
    printf("Yaricap: %lf\n", cember.yaricap);
    
    return 0;
}
