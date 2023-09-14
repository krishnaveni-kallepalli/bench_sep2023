#include<iostream>
using namespace std;
int main()
{
	int a[10],size,i,j,k,count=0,temp;
	
	cout << "Enter size of array:";
	cin >> size;
	
	cout << "Enter elements into array:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
		
	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
		
	// assigning zeros to duplicates 	
	for(i=0;i<size;i++)
		for(j=i+1;j<size;j++)
			if(a[i] == a[j])	
				a[j]=0;
				
	cout << "Display before sorting zeros:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
		
	//if element is not zero put element at free pos in array
	for(i=0;i<size;i++)
        if(a[i] != 0)
            a[count++] = a[i];
    
    //move all zeros to end of array
    for (i=count;i<size;i++)
        a[i] = 0;

	cout << "Display after:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
		
}


/*#include<iostream>
using namespace std;
int main()
{
	int a[10],size,i,j,k,count=0,temp;
	cout << "Enter size of array:";
	cin >> size;
	cout << "Enter elements into array:\n";
	for(i=0;i<size;i++)
		cin >> a[i];
		
	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;
		
		
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		
			if(a[i] == a[j])
				for(k=j;k<size;k++)
				{
					a[k] = a[k+1];
	
				}
			a[size-1]=0;
	     }
	}
	

	cout << "Display:\n";
	for(i=0;i<size;i++)
		cout << a[i] << endl;

}
*/




/*
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,1,5,6,3,8};
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(arr[i]==arr[j])
                arr[j]=0;
        }
    }
    for(int i=0;i<8;i++)
    {
        if(arr[i]== 0)
        {
            for(int j=i;j<8;j++)
                arr[j]=arr[j+1];
        }
    }
    for(int i=0;i<8;i++)
        cout << arr[i] << endl;
}*/
