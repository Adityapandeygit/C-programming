#include<stdio.h>
int main ()
{                                       // prime and composite
	int a;
	printf("enter any number");
	scanf("%d",&a);
	
	if(a%2==0)
	printf("the number is composite");
	if(a==1)
	printf("the number is neither prime nor composite");
	else
	printf("the number is prime");
	return 0;

}