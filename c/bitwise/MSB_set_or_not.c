#include<stdio.h>
#define NSIZE sizeof(int)
int main()
{
	int x,msb;
	printf("Enter num:");
	scanf("%d",&x);

	msb = 1 << (NSIZE -1);
	
	if(msb & x) printf("Set");
	else printf("Not set");
}
