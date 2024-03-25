#include<stdio.h>
void hesapla(float yaricap, float *a,float *c);
int main()
{
    float yc;
    float alan;
    float cevre;
    printf("Lutfen yaricap degerini giriniz:");
    scanf("%f",&yc);
    hesapla(yc,&alan,&cevre);
    printf("Cismin alani %f , cevresi %f 'dir.",alan,cevre);
    return 0;
}

void hesapla(float yaricap, float *a, float *c)
{
    *a=(yaricap)*3.14*(yaricap);
    *c=(yaricap)*2*3.14;
}
