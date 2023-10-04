#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mn=0;
    for(int i=1;i<n;i++)
    {
        int a=arr[i-1];
        int b=arr[i];
        int c=max(a,b);
        int d=min(a,b);
       int k=c/d;
       if(k>2)
       {
          while(1)
          {
              int pk=d*(c/d);
              if(pk<=2)break;
              d*=2;
            //  cout<<d<<endl;
              mn++;
          }
         // cout<<mn<<endl;
       }
    }
    cout<<mn<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
