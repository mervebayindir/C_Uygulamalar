#include<stdio.h>
int main (){
	int en, boy;
	printf("En uzunlugunu giriniz:");
	scanf("%d",&en);
	printf("Boy uzunlugunu giriniz:");
	scanf("%d",&boy);
	
	for(int i=0; i<boy; i++)
{
	for(int j=1; j<=en; j++)
printf("*");
		
	printf("\n");
	}
	
	
}
