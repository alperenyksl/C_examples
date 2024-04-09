#include<stdio.h>
struct tarih {
    int gun;
    int ay;
    int yil;
};
int main()
{
    struct tarih tarih1, tarih2, buyuk;
    printf("1. tarihi giriniz:");
    scanf("%d %d %d",&tarih1.gun,&tarih1.ay,&tarih1.yil);
    printf("2. tarihi giriniz:");
    scanf("%d %d %d",&tarih2.gun,&tarih2.ay,&tarih2.yil);
    if(tarih1.yil>tarih2.yil)
        buyuk=tarih1;
    else if(tarih2.yil>tarih1.yil)
            buyuk=tarih2;
        else if(tarih1.ay>tarih2.ay)
                buyuk=tarih1;
            else if(tarih2.ay>tarih1.ay)
                    buyuk=tarih2;
                else if(tarih1.gun>tarih2.gun)
                        buyuk=tarih1;
                    else 
                            buyuk=tarih2;
    printf("Girilen iki tarihten daha ileri olan:%d %d %d",buyuk.gun,buyuk.ay,buyuk.yil);
    return 0;
}
