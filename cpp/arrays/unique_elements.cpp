
#include<iostream>
using namespace std;
int main()
{
	int i,j,count=0,size;
	
	cout << "Enter array size:";
	cin >> size;
	int a[size];
	cout << "Enter elements into array:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
		
	for(i=0;i<size;i++)
		for(j=i+1;j<size;j++)
				if(a[i] == a[j])
					a[j] = a[i] =0;
	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i];
		
	cout << "Display:\n";
	for(i=0;i<size;i++)
		if(a[i]!=0)
			cout << a[i] << endl;
	return 0;
}
