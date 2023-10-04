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

  int sum=0;

  for(int i=n-1;i>=0;i--)
  {
      if(i==n)sum+=arr[i];
      else if(arr[i]<arr[i+1])
      {
          sum+=arr[i];
      }
      else if(arr[i]>=arr[i+1])
      {
          arr[i]=arr[i+1]-1;
          if(arr[i]>0)
          {
              sum+=arr[i];
          }
      }

  }

  cout<<sum<<endl;

}


