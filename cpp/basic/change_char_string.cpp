#include<iostream>
using namespace std;

int main()
{
	string Str = "hie there";
	cout << Str << endl;
	
	cout << "print char:" << Str[0] << endl;
	Str[0] = 'H';
	cout << Str << endl;
	
	int n = 5;
	cout << "print char:" << Str[n] << endl;
	Str[n] = 'H';
	cout << Str << endl;
	
	return 0;
}
