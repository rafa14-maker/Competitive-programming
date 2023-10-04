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

  int n,c;
  cin>>n>>c;

  int arr[n+1];

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int sum=0;

   for(int i=0;i<n-1;i++)
  {
      sum=max(sum,arr[i]-arr[i+1]-c);
  }

cout<<sum<<endl;
}



