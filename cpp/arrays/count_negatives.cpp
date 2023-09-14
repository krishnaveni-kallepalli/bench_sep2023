#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],size,i,count=0;
	
	cout << "Enter size:";
	cin >> size;
	
	cout << "Enter elements:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
		
	for(i=0;i<size;i++)
		if(a[i] < 0)
			count ++;
	cout << "count of negatives : " << count << endl;
}
