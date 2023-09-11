#include<iostream>
using namespace std;
int main()
{
	int time;
	cout << "Enter time:";
	cin >> time;
	if(time >24) 
		cout << "Enter correctly\n";
	else
	{
		if(time >= 0 && time < 12)
			cout << "Good Morning\n";
		else if(time >= 12 && time <= 16)
			cout << "Good afternoon\n";
		else
			cout << "Good Evening\n";
 	}
}
