#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
  int counter=1,bre=0,flag=0;

  for(int i=0;i<n;i++)
  {
     if(arr[i]==counter)
     {
         counter++;
         if(arr[i]==1)flag++;
     }
     else bre++;
  }
  if(flag>0)cout<<bre<<endl;
   else cout<<-1<<endl;
}
