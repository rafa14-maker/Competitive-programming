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

  int n,k;
  cin>>n>>k;

  int arr[n+5];

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int counter=1;

  for(int i=1;i<n;i++)
  {
      if(arr[i]-arr[i-1]<=k)
      {
          counter++;
      }
      else
      {
          counter=1;
      }
  }

cout<<counter<<endl;
}



