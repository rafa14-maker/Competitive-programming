#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

 int n,i,a,k;
 cin>>n>>a;
 string arr;
 for(i=0;i<n;i++)
 {
 	getline(cin,arr);
 	for(i=0;arr[i]!='/0';i++)
 	{
 		if(arr[i]>='A'&&arr[i]<='Z')
 		{
 		if(arr[i]<='A'+a)
		 	{
		 		arr[i]+=a;
			 }
			 else
			 {
			 	arr[i]-=a;
			 }	
		 }
		 else if(arr[i]>='a'&&arr[i]<='z')
		 {
		 	if(arr[i]<='a'+a)
		 	{
		 		arr[i]+=a;
			 }
			 else
			 {
			 	arr[i]-=a;
			 }
		 }
	 }
	 cout<<arr;
	 
 }
   
  
   
   }
