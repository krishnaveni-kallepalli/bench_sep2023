#include<stdio.h>
#define NSIZE sizeof(int)*2
int main()
{
	int x,i,k;
	printf("Enter num:");
	scanf("%d",&x);
	
	for(i=NSIZE-1;i>=0;i--)
	{
		k=x>>i;
		if(k&1) printf("1");
		else printf("0");
		
	}
}
