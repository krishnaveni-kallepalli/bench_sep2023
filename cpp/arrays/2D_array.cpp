#include<iostream>
using namespace std;
int main()
{
	int rows,cols,i,j;
	string str[][2] = {
			{"hello","hi"},
			{"Gm","Gn"}
			};
	rows = sizeof(str)/sizeof(str[0]);
	cols = sizeof(str[0])/sizeof(str[0][0]);
	cout << "Rows:" << rows << "\n";
	cout << "Cols:" << cols << "\n";
	
	cout << "Display:\n";
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			cout << str[i][j] << "\t";
		cout << endl;
}
