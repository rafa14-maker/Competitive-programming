#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
    long long m=(n*(n-1))/2;
    m--;
  /*  bool tr=false;
    for(int i=0;i<m;i++)
    {
        bool kp=true;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                swap(arr[i],arr[i-1]);
                kp=false;
            }
        }
        if(kp)
        {
            tr=true;
            break;
        }
    }
    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;*/

        for(int i=1;i<n;i++)
       {
          if(arr[i]<=arr[i+1])
          {
              cout<<"YES"<<endl;
              return ;
          }
       }
        cout<<"NO"<<endl;


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
