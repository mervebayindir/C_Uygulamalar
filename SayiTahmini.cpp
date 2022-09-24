#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int rastgele,tahmin,hak=0;
   srand(time(NULL));
   rastgele=rand()%50;
   bool bulunduMu=false;
   printf("bilgisayar 0-50 arasinda sayi tuttu.tahmin et bakalim:\n");
   while(hak<=5)
   {
   	printf("tahmininiz:");
   	scanf("%d",&tahmin);
   	
   	if(rastgele==tahmin)
   	{
   		printf("tebrikler %d adimda sayiyi buldunuz.",hak);
   		bulunduMu=true;
   		break;
	   }
	   else if(rastgele>tahmin)
	   printf("yanlis tahmin.daha buyuk bir sayi soyleyiniz.\n");
	   else
	   printf("yanlis tahmin daha kucuk bir sayi soyleyiniz.\n");
	   hak++;
   }
   if(bulunduMu==false)
printf("5 hakkiniz doldu.sayiyi bulamadiniz.tutulan sayi=%d",rastgele);	
}
