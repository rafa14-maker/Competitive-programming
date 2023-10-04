#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
   string arr;
   int n,i,s;
   
   cin>>n;
   
   for(i=0;i<n;i++)
   {
   	cin>>arr;
   	s=arr.size();
   	if(s>10)
   	{
   		cout<<arr[0]<<s-2<<arr[s-1]<<endl;
	   }
	   else
	   {
	   	cout<<arr<<endl;
	   }
   }
   
   return 0;
}
