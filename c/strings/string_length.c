#include<stdio.h>
#include<stdlib.h>

void len(char s[])
{
	int i;
	for(i=0;s[i]!=NULL;i++);
	printf("Length : %d\n",i);
}
int main()
{
	char s[100] ;
	int i;
	printf("Enter String:");
	scanf("%[^\n]s",s);
	len(s);
	return 0;
}
