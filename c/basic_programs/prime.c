#include<stdio.h>
void prime(int num)
{
	int i,flag=0;
	if(num==0 || num==1) printf("%d is Composite number",num);
	for(i=2;i<num;i++)
		if(num%i==0) flag++;
	if(flag==0) printf("%d is prime number",num);
	else printf("%d is Composite number",num);
}
int main()
{
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	prime(num);
}
