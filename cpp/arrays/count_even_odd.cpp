#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,even=0,odd=0;
	
	cout << "Enter size of array:";
	cin >> n;
	
	cout << "Enter elements into array:\n";
	for(i=0;i<n;i++)
		cin >> a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0) even++;
		else odd++;
	}
	cout << "Evens:" << even << "\n" << "Odds:" << odd << endl;
}
