#include <stdio.h>
#include <string.h>
int main ()
{
	char kelime[30];
	char *duzAdres;
	char *tersAdres;
	printf("Lutfen palindrom olup olmadigini ogrenmek istediginiz kelimeyi giriniz:");
	gets(kelime);
	for(tersAdres=kelime;*tersAdres !=NULL;tersAdres++);
	//ters adresi stringin sonuna atamak icin yapariz.Bunu direkt while dongusu ile de bulabiliriz.
	for(duzAdres=kelime,duzAdres--;tersAdres>=duzAdres;)
	{
		if(*tersAdres==*duzAdres)
		{
			tersAdres--;
			duzAdres++;
		}
		else
		{
			break;
		}
	}
	if(duzAdres>tersAdres)
	{
		puts(kelime);
		printf("Palindromdur..\n");
		
	}
	else
	{
		puts(kelime);
		printf("Palindrom degildir.\n");
	}
}
