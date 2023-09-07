#include<iostream>
using namespace std;
int main()
{
	string str = "hello \"world\"...."; // inserting double quotes in a string 
	cout << str << endl;
	
	str = "\\n in cpp is new line"; // inserting back slash 
	cout << str << endl;
	
	str = "It\'s ok"; // inserting single quotes 
	cout << str << endl;
	
	str = "hello...\nworld"; // inserting \n 
	cout << str << endl;
	
	str = "hello...\t world"; // inserting \t 
	cout << str << endl;
	
	return 0;
}
