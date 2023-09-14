/*
#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i,j,pos,element,temp;
	
	cout << "Enter size:";
	cin >> size;
	
	cout << "Size:" << size << endl;
	
	cout << "Enter elements:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
	
	cout << "Enter position to insert:";
	cin >> pos;
	
	cout << "Enter element:";
	cin >> element;
	
	size = size + 1;
	cout << "Size:" << size << endl;
	
	cout << "Display before inserting:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
	
	for(i=size-1;i>=pos;i--)
	{
		a[i] = a[i-1];	
	}
	a[pos] = element;
	
	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
}
*/

#include<iostream>
using namespace std;
int main()
{
	int size,i,j,pos,element,temp;
	
	cout << "Enter size:";
	cin >> size;
	
	int a[size];
	cout << "Size:" << size << endl;
	
	cout << "Enter elements:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
	
	cout << "Enter position to insert:";
	cin >> pos;
	
	cout << "Enter element:";
	cin >> element;
	
	size = size + 1;
	cout << "Size:" << size << endl;
	a[size-1]=0;
	
	cout << "Display before inserting:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
		/*
	for(i=pos;i<size;i++)
	{
		temp = a[j];
		for(j=i+1;j<size;j++)
			a[i+1] = a[i];
		
	}
	a[pos] = element;
	
*/
	for(i=pos;i<size;i++)
	{
		a[i+1] = a[i];
	}
	a[pos] = element;
	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
	
	return 0;

}

