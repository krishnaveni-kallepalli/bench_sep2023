#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,min,max;
	cout << "Enter size of array :";
	cin >> n;
	
	cout << "Enter elements into array:\n" ;
	for(i=0;i<n;i++)
		cin >> a[i];
		
	cout << "Display:\n";
	for(i=0;i<n;i++)
		cout << a[i] << endl;

	min = a[0];
	max = a[1];
	
	if(a[0]>a[1]) 
	{
		max = a[0];
		min = a[1];
	}
	else
	{
		max = a[1];
		min = a[0];
	}
	
	for(i=2;i<n;i++)
	{
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}
	cout << "Min:" << min << "\n" << "Max:" << max << endl;
}
