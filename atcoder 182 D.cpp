#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long mn=0,sum=0;
    int pk=n;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i]*pk;
        pk--;
        mn=max(sum,mn);
    }
    int idx=0;
    long long psum=0;
   for(int i=0;i<n;i++)
    {
        psum+=arr[i];
      if(sum==psum)
      {
          idx=i;
          break;
      }
    }

    long long sumk=0;
    long long kp=idx+1;
    for(int i=0;i<idx;i++)
    {
        sumk+=(arr[i]*kp);
        kp--;
    }
    cout<<sumk<<endl;
}

int main()
{
    solve();
}
