#include<stdio.h>
int main()
{
	int a[]={-95,25,85,0,30,80,124};
	
	int boyut=(sizeof(a)/sizeof(a[0]));
	printf("Boyut=%d",boyut);
	printf("\nDizinin toplam kapladigi alan=%d",sizeof(a));
	printf("\nDizinin 1. elemaninin kapladigi alan=%d",sizeof(a[0]));

    int enbuyuk=a[0], enkucuk=a[0];
    for(int i=0; i<boyut; i++)
	{
		if(a[i]>enbuyuk)
		{
			enbuyuk=a[i];
		}
	}
    printf("\nDizinin en buyuk elamani=%d",enbuyuk);
    
        for(int i=0; i<boyut; i++)
        {
        	if(a[i]<enkucuk)
			{
        		enkucuk=a[i];
			}
		}
    printf("\nDizinin en kucuk elamani=%d",enkucuk);
}


