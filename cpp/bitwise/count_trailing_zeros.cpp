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
		num = x >> i;
		if(num & 1)
			break; 
		count++;
	
	}
	cout << count << endl;
}
