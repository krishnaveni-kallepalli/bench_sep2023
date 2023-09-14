#include<iostream>
using namespace std;
int main()
{
	int x,pos;
	cout << "Enter num:";
	cin >> x; 
	cout << "Enter pos:";
	cin >> pos;
	
	x = x &(~ (1 << pos));

	cout << "Result:" << x << endl;
	
	return 0;
}
