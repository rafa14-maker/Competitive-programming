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

    int arr[n+5],frr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  int a,b,c,d;

  for(int i=0;i<n-1;i++)
  {
      a=min(arr[i],arr[i+1]);
      b=max(arr[i],arr[i+1]);

      for(int j=0;j<n-1;j++)
      {
          c=min(arr[j],arr[j+1]);
          d=max(arr[j],arr[j+1]);
          if((a<c&&c<b&&b<d)||(a<d&&d<b&&a>c))
          {
              cout<<"yes"<<endl;
              return 0;
          }
      }
  }
  cout<<"no"<<endl;

}


