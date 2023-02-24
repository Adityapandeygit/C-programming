#include<stdio.h>
void swap (int*a,int*b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int main () 
{
	int p,q;
	scanf("%d%d",&p,&q);
	printf("%d%d",p,q);
	swap(&p,&q);
	printf("%d%d",p,q);
	return 0;
}