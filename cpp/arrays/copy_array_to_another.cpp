#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],size,i;
	
	cout << "Enter size:";
	cin >> size;
	
	cout << "Enter elements:\n";
	for(i=0;i<size;i++)
		cin >> a[i];

	for(i=0;i<size;i++)
		b[i] = a[i];
		
	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << b[i] << endl;
}
