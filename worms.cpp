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

    long long n,m;
    cin>>n;

    long long  arr[n+5];

    for(long long  i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i>1)arr[i]+=arr[i-1];
    }
cin>>m;

  while(m--)
  {
      long long  k,l=1,r=n,mid;
      cin>>k;
      while(r>l)
      {
          mid=(l+r)/2;
          if(arr[mid]==k)
          {
              r=mid;
              break;
          }
        else  if(arr[mid]>k)
          {
              r=mid;
          }
        else l=mid+1;

      }
      cout<<r<<endl;
      //cout<<l<<" "<<mid<<" "<<r<<endl;
  }

  //for(int i=0;i<n;i++)cout<<arr[i]<<" ";

}



