#include<stdio.h>
int main(){
	int sayi,sayac=1;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	for(int i=1; i<=10; i++)
{
	printf("%2d * %2d =%3d \n",sayi,i,(sayi*i));
	}
	printf("***********\n");
	while(sayac<=10)
	{
		printf("%2d * %2d =%3d \n",sayi,sayac,(sayi*sayac));
	
		sayac++;
    }	
}
