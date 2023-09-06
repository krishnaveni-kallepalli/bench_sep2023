#include<stdio.h>
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("This is within func:%d %d\n",*a,*b);
}
int main()
{
	int n1,n2,*a,*b;
	a = &n1;
	b = &n2;
	printf("Enter n1,n2:");
	scanf("%d %d",&n1,&n2);
	swap(&n1,&n2);
	printf("This is in main func:%d %d\n",*a,*b);
}
