#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],sum[2][2],i,j,rows,cols;
	rows = sizeof(a)/sizeof(a[0]);
	cols = sizeof(a[0])/sizeof(a[0][0]);
	cout << "Enter elements to array a:\n";
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			cin >> a[i][j];
	cout << "Enter elements to array b:\n";
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			cin >> b[i][j];
			
			
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			sum[i][j] = a[i][j]+b[i][j];
			
	cout << "Display:\n";
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			cout << sum[i][j];
}
