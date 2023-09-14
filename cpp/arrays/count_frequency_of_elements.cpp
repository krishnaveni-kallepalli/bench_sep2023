#include<iostream>
using namespace std;
int main()
{
	int a[100], i,j,count,size,freq[100];
	
	cout << "Enter array size:";
	cin >> size;
	
	cout << "Enter elements into array:\n";
	for(i=0;i<size;i++)
	{
		cin >> a[i];
		freq[i] = -1;           //  initially -1 
	}
		
	for(i=0;i<size;i++)
	{
		count = 1;
		for(j=i+1;j<size;j++)
		{
				if(a[i] == a[j])
				{
					count++;   // increment 
					freq[j]=0; //not to count same element 
				}

		}
		
		//updating count to freq array
		if(freq[i]!=0)
			freq[i] = count;
	}
	
		
	cout << "Display:\n";
	for(i=0;i<size;i++)
		if(freq[i]!=0)
			cout << a[i] <<":" << freq[i] << endl;
}
