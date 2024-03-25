#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct hasta{
	char tc[20];
	char ad[20];
	char soyad[20];
	char tel[20];
	char adres[20];
	int klinikNo;
	int doktorNo;
	int durum;
};
struct doktor{
	char ad[20];
	char soyad[20];
	int klinikNo;
	int doktorNo;
};
void hastaKayit()
{
	system ("cls");
}
void doktorGiris()
{
	system ("cls");	
}
void doktorKayit()
{	
	system ("cls");	
	struct doktor d1;
	printf("\nDoktor kayit ekrani ");
	printf("Ad:");
	scanf("%s",d1.ad);
	printf("\nSoyad:");
	scanf("%s",d1.soyad);
	printf("Klinikler:\n 1-Kulak Burun Bogaz(kbb)\n2-Fizik tedavi \n3-Cocuk sagligi \n4-Noroloji \n 5-Dahiliye\n");
	printf("\nKlinik no:");
	scanf("%d",&d1.klinikNo);
	printf("\nDoktor no:");
	scanf("%d",&d1.doktorNo);
	FILE *ptr=fopen("doktorlar.txt","a+b");
	fwrite(&d1,sizeof(struct doktor),1,ptr);
	fclose(ptr);
	printf("Doktor kaydi tamamlandi.\n");
	
}
int menu()
{	
	int secim;
	printf("\nHASTANE OTOMASYONU\n\n");
	printf("1-Hasta kayit \n");
	printf("2-Doktor giris\n");
	printf("3-Doktor kayit\n");
	printf("0-Programi kapat \n");
	printf("Seciminiz:");
	scanf("%d",&secim);
	return secim;
}
int main()
{
	int secim=menu();
	while(secim!=0)
	{
		switch(secim)
		{
			case 1:hastaKayit();break;
			case 2:doktorGiris();break;
			case 3:doktorKayit();break;
			case 0:break;
			default:printf("hatali secim!\n");break;
		}
		secim=menu();
	}
	return 0;
}
