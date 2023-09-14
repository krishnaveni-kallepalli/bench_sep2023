
#include<iostream>
#define NSIZE sizeof(int)*2
using namespace std;
int main()
{
	int x,i,count = 0,num;
	cout << "Enter number:";
	cin >> x;
	
	for(i=NSIZE-1;i>=0;i--)
	{
		num = x >> i;
		if(num & 1)
			break; 
		count++;
	
	}
	cout << count << endl;
}


/*

#include<iostream>
#define NSIZE sizeof(int)*2
using namespace std;
int main()
{
	int x,i,count = 0,num,leading_zeros;
	
	cout << "Enter number:";
	cin >> x;
	
	for(i=0;i<NSIZE;i++)
	{
		num = x >> i;
		if(num & 1)
			count = i;
	}
	leading_zeros = NSIZE-1-count; 
	cout << leading_zeros << endl;
	return 0;
}

*/	
	
	
