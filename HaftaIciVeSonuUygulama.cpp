//Hafta Ici Hafta Sonu Uygulama
#include <stdio.h>f
int main()
{
	int gun;
	printf("1-7 arasi sayi giriniz:");
	scanf("%d",&gun);
	
	if(gun==1 || gun==2 || gun==3 || gun==4 || gun==5)
	printf("Hafta ici");
	else if(gun==6 || gun==7)
	printf("Hafta Sonu");
	else
	printf("Hatali Giris Yaptiniz");
	
}

