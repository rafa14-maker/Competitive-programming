#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    long long sum=0,p=0;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==k)p++;
       else if(arr[i]>=0&&k>=0)
        {
           sum+=abs(arr[i]-k);
        }
        else if(arr[i]<0&&k<0)
        {
            sum+=abs(arr[i]-k);
        }
        else if(arr[i]>=0&&k<0)
        {
            sum+=arr[i];
            sum+=abs(k);
        }
        else if(arr[i]<0&&k>=0)
        {
            sum+=k;
            sum+=abs(arr[i]);
        }
    }
    if(p==n)cout<<0<<endl;
    else if(sum==0)cout<<1<<endl;
    else cout<<2<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  //solve();
}

