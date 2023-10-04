#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    long long sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        cnt+=a;
        long long kp=a/k;
        if(a%k!=0)kp++;
        sum+=kp;
       // cout<<sum<<endl;
    }
   if(cnt%k==0)cnt/=k;
   else
   {
       cnt/=k;
       cnt++;
   }
    cout<<min(sum,cnt)<<" "<<max(sum,cnt)<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
