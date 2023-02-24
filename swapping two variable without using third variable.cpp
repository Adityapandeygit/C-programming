// swapping program 
#include<stdio.h>
int main ()
{
	int a,b;
	printf("enter the number for swapping");
	scanf("%d%d",&a,&b);
	printf("after swapping");
	
	// logic 
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d\n",a,b);
	return 0;
}