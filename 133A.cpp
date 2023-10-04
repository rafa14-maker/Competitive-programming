#include<bits/stdc++.h>
using namespace std;

int main()
{
	string arr;
	
	cin>>arr;
	
    int i;
    
    for(i=0;i<arr.size();i++)
    {
    	if(arr[i]=='H'||arr[i]=='Q'||arr[i]=='9')
    	{
    		cout<<"YES"<<endl;
    		return 0;
		}
	}
	cout<<"NO"<<endl;
}
