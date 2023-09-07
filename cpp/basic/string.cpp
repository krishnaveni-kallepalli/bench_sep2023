#include<iostream>
using namespace std;
int main()
{
	char str[20];
	cout << "Enter string:";
	cin >> str;
	cout << "String:"<< str << endl;
	
	string s;
	cout << "Enter string:";
	cin >> s;
	cout << "String:" << s << endl;
	 
	string s1 = "Hello";
	string s2 = "World";
	string s3 = s1 + s2;
	cout << s3 << endl;
	
	
	return 0; 
}
