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

  for(int i=0;i<n;i++)
  {
      int k=arr[i]*15,a;
          while(arr[i]--)
          {
              cin>>a;
              k+=a*5;
          }
    //  cout<<k<<endl;
      if(sum==0)sum=k;
      else sum=min(sum,k);
  }

  cout<<sum<<endl;

}



