#include<iostream>
using namespace std;
int main()
{
	int i;	
	string str[] = {"Hello","hie","good day..!"};
	for(i=0;i<sizeof(str)/sizeof(str[0]);i++)
		cout << str[i] << endl;
}
