#include<iostream>
using namespace std;
int main()
{
	int a[10],size,i,j,k,count=0,temp;
	cout << "Enter size of array:";
	cin >> size;
	cout << "Enter elements into array:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
		
	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
		
		
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		
			if(a[i] == a[j])
				for(k=j;k<size;k++)
				{
					a[k] = a[k+1];
	
				}
			a[size-1]=0;
	     }
	}
	

	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;

}
