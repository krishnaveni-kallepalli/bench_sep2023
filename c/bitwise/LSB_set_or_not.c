#include<stdio.h>
int main()
{
	int x;
	printf("Enter num:");
	scanf("%d",&x);
	if(x&1) printf("LSB is set\n");
	else printf("LSB is not set");
}
