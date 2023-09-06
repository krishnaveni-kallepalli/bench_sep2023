#include<stdio.h>
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("This is within func:%d %d\n",a,b);
}
int main()
{
	int a,b;
	printf("Enter a,b:");
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("This is in main func:%d %d\n",a,b);
}
