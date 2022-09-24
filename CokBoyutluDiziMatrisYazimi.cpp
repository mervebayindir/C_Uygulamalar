# include<stdio.h>
int main()
{
	int a[3][2]={{0,1},{5,6},{3,9}};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
