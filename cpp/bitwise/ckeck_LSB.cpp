#include<iostream>
using namespace std;

int main()
{
	int x;
	cout <<  "Enter num:";
	cin >> x;
	if(x&1) 
		cout << "Set\n";
	else 
		cout << "Not set\n";
}
