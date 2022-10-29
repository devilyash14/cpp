#include<stdio.h>
int area(int l,int b,int h);
int main()
{
	int l,b,h,ar;
	printf("enter the length");
	scanf("%d",&l);
	printf("enter the breath");
	scanf("%d",&b);
	printf("enter the height");
	scanf("%d",&h);
	ar=area(l,b,h);          
	printf("%d",ar);
}
	int area(int l,int b,int h)
	{
		int ar;
		ar=0.5*l*b*h;
		return ar;
	}
