#include <stdio.h>

int main()
{
	int arr[] = { 10, 20, 30, 40, 50 };
	int* ptr;

	// ptr = &arr[0]; Asagidaki tanımlamayla aynı.
	ptr = arr;

	printf("%d", ptr);
	printf("\n%d", ptr + 1);

	// ptr ve ptr+1 arasında int oldugu icin 4 byte kadar fark vardır.
	// Buna pointer aritmetigi denir.
    // ptr++ ile (ptr+1) ayni seye esittir

	ptr++;
	printf("\n%d", ptr);

	return 0;
}