#include<iostream>
using namespace std;
int main()
{
	string s1 = "Hello";
	string s2 = "world";
	cout << s1[i]
	string s3;
	/*
	s3 = s1.append(s2);
	cout << s3 << endl;
	*/
	
	/*
	string s3 = s1+s2;
	cout << s3 << endl;
	*/
	
	/*
	int i,n;
	n=s1.length();
	for(i=0;s1[i]!='\0';i++)
		s3 += s1[i];
	for(i=0;s2[i]!='\0';i++)
		s3 += s2[i];
	cout << s3 << endl;
	return 0;
	
	
	int i,j;
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';i++,j++)
		s1[i] = s2[j];
	s1[i]='\0';

	cout << s1 <<endl;
	return 0;
	*/
	int i, j;
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; i++, j++)
        s1[i] = s2[j];
    s1[i] = '\0';

    cout << s1 << endl;
}
