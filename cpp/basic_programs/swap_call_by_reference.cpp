#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
	*p = *p ^ *q;
	*q = *p ^ *q;
	*p = *p ^ *q;
	cout << *p << " " << *q << endl;
}
int main()
{
	int a,b,*p,*q;
	p = &a;
	q = &b;
	cout << "Enter a,b:";
	cin >> a >> b;
	swap(&a,&b);
	cout << *p << " " << *q << endl;
}
