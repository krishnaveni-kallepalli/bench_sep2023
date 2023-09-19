#include<stdio.h>
void cat(char d[],char s[])
{
	int i;
	for(i=0;i<s[i]!=NULL;i++)
		d[i] = s[i];
	d[i]=NULL;
}
int main()
{
	char s[100],d[100];
	
	printf("Enter Source:");
	scanf("%[^\n]s",s);
	
	printf("Enter Destination:");
	scanf(" %[^\n]s",d);
	
	printf("Source:%s\n",s	);
	printf("Destination:%s\n",d);

	cat(d,s);
	
	printf("Destination:%s\n",d);
	return 0;
}
