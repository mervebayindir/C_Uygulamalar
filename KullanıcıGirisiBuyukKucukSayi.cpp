#include <stdio.h>
int main()
{
	int sayi1,sayi2,sayi3;
	printf("1.Sayiyi Giriniz:");
	scanf("%d",&sayi1);
	
	printf("2.Sayiyi Giriniz:");
	scanf("%d",&sayi2);
	
	printf("3.Sayiyi Giriniz:");
	scanf("%d",&sayi3);
	
	if(sayi1<sayi2 && sayi1<sayi3)
	printf("En kucuk sayi %d",sayi1);
	
	else if(sayi2<sayi3)
	printf("En kucuk sayi %d",sayi2);
	
	else
	printf("En kucuk sayi %d",sayi3);
}
