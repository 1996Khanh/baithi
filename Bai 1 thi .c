#include<stdio.h>

int main()
{
	int a , b ;
	int sl;
	int tong, hieu, tich ;
	float thuong;

	printf("Nhap a vao : ");
	scanf("%d",&a);
	printf("Nhap b vao : ");
	scanf("%d",&b);
	printf("\nNhap 1 de tinh tong 2 so ");
	printf("\nNhap 2 de tinh hieu 2 so ");
	printf("\nNhap 3 de tinh tich 2 so ");
	printf("\nNhap 4 de tinh thuong 2 so ");
	scanf("%d",&sl);
	
	switch(sl)
	{
		case 1 :
		tong = a + b;
		printf("\na + b = %d",tong);
		break;
		case 2 :
		hieu = a - b;
		printf("\na - b = %d",hieu);
		break;
		case 3 :
		tich = a * b;
		printf("\na * b = %d",tich);
		break;
		case 4 :
		thuong = (float)a / (float)b;
		printf("\na / b = %f",thuong);
		break;
	}
}
