#include<stdio.h>
void fun(int x,int n)
{
	int i,k;
	for(i=n-1;i>=0;i--)
	{
		k=x>>i;
		if(k&1) printf("1");
		else printf("0");
		
	}
}
int main()
{
	int x,n,k,i;
	printf("Enter num:");
	scanf("%d",&x);
	printf("Enter nth bit to check:");
	scanf("%d",&n);
	fun(x,n);
	if(k&1) printf("set ");
	else printf("notset");
}
