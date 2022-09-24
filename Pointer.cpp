#include<stdio.h>
int main(){
	int a;
	a=15;
	printf("a=%d \n",a);
	printf("a adresi=%p \n",&a);
	
	int* p;
	int* p1,p2;
	int p3,*p4;
	
	int* point,b;
	b=5;
	point=&b;
	printf("b= %d \n",b);
	printf("b nin adresi= %p \n",&b);
	printf("point=%p\n",point);
	
	printf("point=%d \n",*point);
}
