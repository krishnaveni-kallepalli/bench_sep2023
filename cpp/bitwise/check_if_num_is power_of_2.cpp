#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout << "Enter num:";
	cin >> num;
		
	for(i=0;i<num,i++)
		if(2^i == num)
			break;
	cout << num << " is power of 2\n";
	return 0;
}
