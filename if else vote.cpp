#include<stdio.h>
int main ()
{
	int a;
	printf("enter the age");
	scanf("%d",&a);
	
	if(a>=18 ) {
	printf("you are eligible to vote\n");
	printf("so vote\n");	
	} 
	
	else 
	printf("you are not eligible to vote");
	
	return 0;
	
}