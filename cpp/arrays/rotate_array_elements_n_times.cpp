// rotate n times
#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i,j,pos,element,temp,n;
	
	cout << "Enter size:";
	cin >> size;
	
	cout << "Enter elements:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
	
	cout << "Enter no.of times to rotate:";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		temp = a[size-1];
		for(j=size-1;j>0;j--)
		{
			a[j] = a[j-1];	
		}	
		a[0] = temp;
	}
	 
	
	cout << "Display after rotation:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
	return 0;
}


