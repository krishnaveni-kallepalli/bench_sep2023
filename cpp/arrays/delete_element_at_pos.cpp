#include<iostream>
using namespace std;
int main()
{
	int a[10],size,i,j,pos;
	
	cout << "Enter size:";
	cin >> size;
	
	cout << "Enter position:";
	cin >> pos;
	
	cout << "Enter elements into array:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
	
	for(i=0;i<size;i++)
	{
		if(i == pos)
		{
			cout << "element in pos "<< pos << " is:" << a[pos] << endl;
			for(j=pos;j<size;j++)
				a[j] = a[j+1];
		}
	}
	a[size-1]=0;
	cout << "Display:\n";
	for(i=0;i<size;i++)
		if(a[i]!=0)
			cout << a[i] << endl;
	
	return 0;
	
}

#include<iostream>
using namespace std;
int main()
{
	int a[10],size,i,j,pos;
	
	cout << "Enter size:";
	cin >> size;
	
	cout << "Enter position:";
	cin >> pos;
	
	cout << "Enter elements into array:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
	
	for(i=0;i<size;i++)
	{
		if(i == pos-1)
		{
			cout << "element in pos "<< pos << " is:" << a[pos-1] << endl;
			for(j=pos-1;j<size;j++)
				a[j] = a[j+1];
		}
	}
	a[size-1]=0;
	cout << "Display:\n";
	for(i=0;i<size;i++)
		if(a[i]!=0)
			cout << a[i] << endl;
	
	return 0;
	
}
