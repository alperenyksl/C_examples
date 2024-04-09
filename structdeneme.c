#include <stdio.h>

struct ogrenci {
    char ad[20];
    char soyad[20];
    float ort;
};

int main() {
    struct ogrenci ogrenci_dizisi[10];
    
    for (int i = 0; i < 10; i++) {
        printf("%d. ogrencinin adini, soyadini, ortalamasini giriniz: ", i+1);
        scanf("%s %s %f", ogrenci_dizisi[i].ad, ogrenci_dizisi[i].soyad, &ogrenci_dizisi[i].ort);
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%s %s %f\n", ogrenci_dizisi[i].ad, ogrenci_dizisi[i].soyad, ogrenci_dizisi[i].ort);
    }
    
    return 0;
}
