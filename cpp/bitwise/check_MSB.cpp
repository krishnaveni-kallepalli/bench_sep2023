#include<iostream>
#define NSIZE sizeof(int)
using namespace std;

int main()
{
	int x,msb;
	cout << "Enter num:";
	cin >> x;
	msb = 1 << (NSIZE -1);
	if (x&msb) cout << "Set\n";
	else cout << "Not set\n";
}



