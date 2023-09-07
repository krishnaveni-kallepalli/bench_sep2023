#include<iostream>
using namespace std;
int main()
{
	 string s1 = "hello";
	 string s2 = "world";
	 
	 string s3 = s1+s2;
	 cout << s3 << endl;
	 
	 s1 = s1+s2;
	 cout << s1 << endl;
	 
	 s3 = s1+s2;
	 cout << s3 << endl; 
	 
	 s2 = s2.append(s2);
	 cout << s2 << endl;
	 return 0; 
}
