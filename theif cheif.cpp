/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  cin>>n;

  int arr[n+5];

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];

  }
  long long int sum=1;

  for(int i=0;i<n;i++)
  {
      sum*=arr[i];

  }

  for(int i=0;i<n-1;i++)
  {
      if(arr[i]==0)cout<<0<<" ";
     else cout<<sum/arr[i]<<" ";
  }
   if(arr[n-1]==0)cout<<0<<endl;
     else cout<<sum/arr[n-1]<<endl;




}



