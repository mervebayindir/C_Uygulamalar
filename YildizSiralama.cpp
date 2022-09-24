#include <stdio.h>
int main(){
	int boy,yildiz=1,bosluk;
	printf("boy giriniz:");
	scanf("%d",&boy);
	bosluk=boy-1;
	for(int i=0; i<boy; i++)
	{
		for(int j=0; j<bosluk; j++)
		{
			printf(" ");
		}
		bosluk -= 1;
		for(int k=0; k<yildiz; k++)
		{
			printf("*");
		}
		yildiz += 2;
		printf("\n");
	}
	
	
	
	
	
}
