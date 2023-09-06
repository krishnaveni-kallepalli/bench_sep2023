#include<stdio.h>
void evenodd(int num)
{
	if(num%2==0) printf("Even\n");
	else printf("odd\n");
}
int main()
{
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	evenodd(num);
}
