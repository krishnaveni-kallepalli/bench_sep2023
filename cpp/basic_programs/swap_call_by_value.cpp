#include<iostream>
using namespace std;
void swap(int a,int b)
{
	a = a^b;
	b = a^b;
	a = a^b;
	cout << a << " " << b << endl;
}
int main()
{
	int a,b;
	cout << "Enter a,b:";
	cin >> a >> b;
	swap(a,b);
	cout << a << " " << b << endl;
}
