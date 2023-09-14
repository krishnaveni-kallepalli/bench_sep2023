#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	(*x = *x^*y),(*y = *x^*y),(*x = *x^*y);
	cout << "M1:" << *x << " " << *y << endl; //o/p : 3 2
	(*x = *x+*y),(*y = *x-*y),(*x = *x-*y);
	cout << "M2:" << *x << " " << *y << endl; //o/p : 2 3
	(*x = (*x)*(*y)),(*y = (*x)/(*y)),(*x = (*x)/(*y));
	cout << "M3:" << *x << " " << *y << endl; //o/p : 3 2
}
int main()
{
	int x,y,*p,*q;
	p = &x;
	q = &y;
	
	cout << "Enter a,b:\n";
	cin >> x >> y;
	
	swap(&x,&y);
	
	cout << "final:" << *p << " " << *q << endl; // o/p : 3 2
	return 0;
}
