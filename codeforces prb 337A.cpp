#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,j,a,b,l;
 cin>>n>>m;
 int arr[m];

 for(i=0;i<m;i++)
 {
     cin>>arr[i];
 }

 sort(arr,arr+m);

 l=arr[m];

 for(i=0;i<m;i++)
 {
    a=arr[i+1]-arr[i];
    l=min(l,a);
 }





 return 0;
}
