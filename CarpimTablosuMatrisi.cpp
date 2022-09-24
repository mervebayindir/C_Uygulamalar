#include<stdio.h>
int main()
{
	int a,b,sayilar,altcizgi;
	printf("%6c",' ');
	for(sayilar=1; sayilar<=10; sayilar++)
	{
    printf("%6d",sayilar);
  	}
  	printf("\n");
  	for(altcizgi=10; altcizgi<=80; altcizgi++)		
	  {
  		printf("-");
	  }
    for(b=1; b<=10; b++)
	{
		printf("\n%3d  |",b);
		for(a=1; a<=10; a++)
		{
			printf("%6d",a*b);
		}
	}	
}
