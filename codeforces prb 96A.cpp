#include<bits/stdc++.h>

using namespace std;

int main()
{ 
  string arr;
  
  cin>>arr;
  
  int i,j,counter=0,k;
  
  k=arr[0];
  
 for(i=0;i<arr.size();i++)
 {
 
 	if(arr[i]==k)
 	{
 		counter++;
	 }
	 	if(counter>=6)
 	{
 	
 		cout<<"YES"<<endl;
 		return 0;
	 }
	 else if(arr[i]!=k)
	 {
	 	k=arr[i];
	 	counter=0;
	 }
 }
 if(counter<7)
 {
 	cout<<"NO"<<endl;
 }
  
  return 0;
  
}
