#include<stdio.h>
void swap (int a,int b)
{
	int c=a;
	a=b;
	b=c;
	printf("%d%d",a,b);
}
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d%d",a,b);
	swap(a,b);
	return 0;
}