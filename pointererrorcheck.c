#include <stdio.h>

int main()
{
	
	
	int i;
	int *pi;
	int *const cp = &i;
	const int ci = 7;
	const int *pci;
	const int *const cpc = &ci;
	
	cp = &ci; // error: assignment of read-only variable 'cp'
	
	*cp = ci; 
	
	i = ci;
	ci = 0; // error: assignment of read-only variable 'ci'
	ci--; // error: decrement of read-only variable 'ci'
	
	++pci; 
	pci = cpc;
	
	*pci = 3; // error: assignment of read-only location '*pci'
	
	cpc++; // error: increment of read-only variable 'cpc'
	pi = pci;
	
	return 0;
}
/*
Compile and run the following program. Comment the parts where you get an error. Write the error to
the right of the comment line. Explain why this error occurred.

ANSWER:
cp = &ci;: bcs cp sabit bir pointerdir, yani farkli bir bellek konumuna isaret etmek üzere yeniden atanamaz.
ci = 0;: bcs ci sabit bir degiskendir, yani ona yeni bir deger atanamaz.
ci--;: bcs ci sabit bir degiskendir, yani degistirilemez.
*pci = 3;: bcs pci sabit bir bellek konumuna isaret eder, bu da bellek deðerinin pointer araciligiyla degistirilemeyecegi anlamina gelir.
cpc++;: bcs cpc sabit bir pointerdir, bu pointerin degerinin degistirilemeyecegi anlamina gelir.
pi = pci; pi = pci dogrusu; bu programda bir hata degildir. Fakat, const- nitelikli bir nesneye bir isaretçiyi const-nitelikli olmayan bir nesneye bir isaretçi atamak genellikle iyi bir uygulama degildir.(çünkü const-nitelikli nesnenin const-nitelikli olmayan pointer araciligiyla degistirilmesine izin verir.)
Bu programda, pci bir const int'in göstericisidir, pi ise const olmayan bir int'in bir göstericisidir.Bu nedenle, pci'ye pi atamak herhangi bir soruna neden olmaz, ancak pci'nin isaret ettigi const nitelikli nesneyi degistirmek için pi kullanilirsa, pci'yi pi'ye atamak tanimsiz davranisa neden olabilir.
*/


