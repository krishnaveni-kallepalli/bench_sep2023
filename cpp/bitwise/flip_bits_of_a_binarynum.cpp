#include<iostream>
#define NSIZE sizeof(int)*2
using namespace std;
int main()
{
	int x,i,count = 0,num;
	cout << "Enter number:";
	cin >> x;
	
	for(i=0;i<NSIZE;i++)
	{
		if(x&1==0)
			x = x ^ (1 << i);
			
	}
}
