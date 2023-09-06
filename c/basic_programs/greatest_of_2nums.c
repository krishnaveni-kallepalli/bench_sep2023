#include<stdio.h>
void greatest(int a,int b)
{
	if(a>b) printf("%d is greater",a);
	else printf("%d is greater",b);
}
int main()
{
	int a,b;
	printf("Enter a,b:");
	scanf("%d %d",&a,&b);
	greatest(a,b);
}
