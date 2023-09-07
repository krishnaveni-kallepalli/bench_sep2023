#include<iostream>
using namespace std;
int main()
{
	int num,flag=0,i;
	cout << "Enter num:";
	cin >> num;
	if(num==0|num==1) flag ++;
	else
	{
		for(i=2;i<num;i++)
			if(num%i==0) flag++;
	}
	if(flag==0) cout << num << " is primne\n";
	else cout << num << " is composite\n";
}
