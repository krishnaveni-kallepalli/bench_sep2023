#include<iostream>
using namespace std;
int main()
{
	int i;
	float f;
	char ch;
	char str[10];
	bool b = true;
	string st = "Hello";
	/*
	cout << "Enter integer:";
	cin >> i;
	cout << i << endl;
	cout << "Enter floating integer:";
	cin >> f;
	cout << f << endl;
	*/
	cout << "Enter inputs :\n"; 
	cin >> i >> f >> ch >> str; // cin --->  read input 
	cout << "Display:\n";
	cout << i << endl << f << endl << ch << endl << str << "\n" << b << endl;
	cout << "string: " << st << "\n";
	return 0; 
}
