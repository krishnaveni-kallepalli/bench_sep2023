#include<iostream>
using namespace std;
int main()
{
	int size,i;
	string str[]= {"apple","banana","carrot","dragon","peach"};
	size = sizeof(str)/sizeof(str[0]);
	cout << "Size:" << size << "\n" << "Elements: ";
	for(i=0;i<size;i++)
		cout << str[i] << "\t";
	cout << endl;
}
