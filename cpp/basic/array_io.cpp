#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i;
	
	cout << "Enter size of array:";
	cin >> n;
	
	cout << "Enter array elements:\n";
	for(i=0;i<n;i++)
	{
		 cin >> a[i];
	}
	
	cout << "Display:\n";
	for(i=0;i<n;i++)
	{
		 cout << a[i] << "\n";
	}
}
