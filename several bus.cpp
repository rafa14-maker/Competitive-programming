/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int n,t;
  cin>>n>>t;
  int arr[n+5][2];

  for(int i=0;i<n;i++)
  {
      cin>>arr[i][0]>>arr[i][1];
  }
   long long  k=10000000000,l=0;
  for(int i=0;i<n;i++)
  {
      int counter=0;
      while(arr[i][0]<t)
      {
          arr[i][0]+=arr[i][1];
         // counter++;
      }
      if(k>arr[i][0])
      {
          k=arr[i][0];
         // k=counter;
          l=i+1;
      }
  }
  cout<<l<<endl;
}



