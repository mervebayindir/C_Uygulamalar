#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){//surekli farkli sayi üretir
	int rastgele;
	srand(time(NULL));
//	rastgele=rand()%10;
//  rastgele=rand();
    rastgele=50+rand()%30;
	printf("%d",rastgele);
	
	
}
