#include<stdio.h>

int main()
{
	int i , arr[10];
	for(i=1;i<=10;i++)
	{
		printf("\nGia tri cua phan tu thu %d : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=10;i>0;i--)
	{
		printf("\n%d",arr[i]);
	}
}
