#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout << "Enter a,b:";
	cin >> a >> b;
	while(1)
	{
		cout << "Enter choice:";
		cin >> ch;
		switch(ch)
		{
			case '+' : 
			cout << a+b << endl;
			break;
			case '-':
			cout << a-b << endl;
			break;
			case '*':
			cout << a*b << endl;
			break;
			case '/':
			cout << a/b << endl;
			break;
			case '%':
			cout << a%b << endl;
			break;
			default:
			cout << "Invalid operation\n";
			exit(1);
		}
	}
}
