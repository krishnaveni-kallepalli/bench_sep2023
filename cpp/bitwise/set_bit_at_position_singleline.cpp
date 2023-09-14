#include<iostream>
using namespace std;
int main()
{
	int x,pos1,pos2;
	cout << "Enter num:";
	cin >> x; 
	cout << "Enter pos1,pos2:";
	cin >> pos1 >> pos2;
	cout << pos1 << " " << pos2 << endl;
	
	x = x | (1 << pos1),x = x | (1 << pos2);
	cout << "Result:" << x << endl;
	
	return 0;
}


/*
#include<iostream>
using namespace std;
int main()
{
	int x,pos1,pos2;
	cout << "Enter num:";
	cin >> x; 
	cout << "Enter pos1,pos2:";
	cin >> pos1 >> pos2;
	cout << pos1 << " " << pos2 << endl;
	
	x = x | (1 << pos1);
	cout << "Result:" << x << endl;
	
	x = x | (1 << pos2);
	cout << "Result:" << x << endl;
	
	
	return 0;
}
*/
