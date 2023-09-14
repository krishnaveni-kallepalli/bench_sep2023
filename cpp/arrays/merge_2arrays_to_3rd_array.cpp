#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],c[100],i,j,a_size,b_size,c_size;
	cout << "Enter size of array:";
	cin >> a_size >> b_size;
	
	c_size = a_size+b_size;
	
	cout << "Enter elements into array a:\n";
	for(i=0;i<a_size;i++)
		cin >> a[i];
		
	cout << "Enter elements into array b:\n";
	for(i=0;i<b_size;i++)
		cin >> b[i];
		
	//copying 1st array elements
	for(i=0;i<a_size;i++)
		c[i] = a[i];
	//copying 2nd array elements
	for(i=0,j=a_size;i<b_size && j<c_size ;i++,j++)
			c[j] = b[i];

	cout << "Display:\n";
	for(i=0;i<c_size;i++)
		cout << c[i] << endl;
	return 0;
	
}
