#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20];
	int i,j,k,pos,num;
	
	cout<<"enter size:";
	cin>>k;
	
	cout<<"enter array element :";
	for(i=0;i<k;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"enter position to insert :";
	cin>>pos;
	
	cout<<"enter number to insert :";
	cout<<num;
	
 for(i=k; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[pos-1] = num;
        k++; 
	arr[k]=num;
	
	cout<<"the array:";
		for(i=0;i<k;i++)
	{
		cout<<arr[i];
	}
	
	
}
