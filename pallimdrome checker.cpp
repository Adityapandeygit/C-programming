#include<stdio.h>
int main ()
{
	int a,t,b=0,r;
	printf("enter the number");
	scanf("%d",&a);
	//logic
	t=a;
	// lopping
	while(a>0)
	{ // logic starts here 
		r=a%10;
		b=(b*10)+r;
		a=a/10;
	}
	// conditioning
	if(t==b)	
	printf("pallimdrome");
	else
	printf("not");
	return 0;
}