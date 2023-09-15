#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout << "Enter num:";
	cin >> num;
	
	if(num & 1) cout << "odd\n";
	else cout << "even\n";
	
	return 0;
}
