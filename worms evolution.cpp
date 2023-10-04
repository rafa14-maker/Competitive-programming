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

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          int p=arr[i]-arr[j];
          for(int k=0;k<n;k++)
          {
              if(arr[k]==p&&i!=j&&j!=k)
              {
                  cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                  return 0;
              }
          }
      }
  }
  cout<<-1<<endl;

}



