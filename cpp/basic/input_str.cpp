#include<iostream>
using namespace std;
int main()
{
/*
	string fullName;
	cout << "Type your full name: ";
	cin >> fullName;
	cout << "Your name is: " << fullName << endl;
*/
	string FullName;
	cout << "Type your full name: ";
	getline (cin , FullName);
	cout << "Your name is: " << FullName << endl;
}
