#include<stdio.h>
int main(){
int vize1,vize2,final;
float okulort;
float dersort;

printf("1.vize:");
scanf("%d",&vize1);
printf("2.vize:");
scanf("%d",vize2);
printf("Final:");
scanf("%d",&final);
printf("universite ortalamanizi girin");
scanf("%f",&okulort);

dersort =(vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);

if (dersort>= 90){
	printf("Harf notunuz - AA ve Dersortalamaniz: %f",dersort);
	}
else if (dersort >= 85 && dersort < 90){
	printf("Harf notunuz - BA ve Dersortalamaniz: %f",dersort);
	}
	
else if (dersort >= 80 && dersort < 85){
	printf("Harf notunuz - BB ve Dersortalamaniz: %f",dersort);
	}
	
else if (dersort >= 75 && dersort < 80){
	printf("Harf notunuz - CB ve Dersortalamaniz: %f",dersort);
	}
	
else if (dersort >= 70 && dersort < 75){
	printf("Harf notunuz - CC ve Dersortalamaniz: %.2f",dersort);
	
	if (okulort < 2.5){
		printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
	  }
	}
	
else if (dersort >= 65 && dersort < 70){
	printf("Harf notunuz - DC ve Dersortalamaniz: %f",dersort);
    	if (okulort < 2.5){
		printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
	  } 
	}
else if (dersort >= 60 && dersort < 65){

		if (okulort < 2.5){
		printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk");
	  } 
	}
else
{
	printf("Harf notunuz - FF ve Dersortalamaniz: %f",dersort);
    printf("Dersten Kaldiniz");
	}
	
}
