#include<bits/stdc++.h>
using namespace std;
using ll =long long;

vector<ll>v;

void solve()
{
    int k,n;
    cin>>k>>n;
    int arr[n+5],frr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i]>>frr[i];

    ll idx=0,p=0,counter=0;

    bool tr=false;

    for(int i=1;i<=n;i++)
    {
        counter+=(arr[i]-idx);

        if(frr[i]+p>k)
        {
             p=frr[i];
             counter+=(arr[i]*2);
        }
        else
        {
            p+=frr[i];
        }
        if(p==k&&i<n)
        {
            counter+=arr[i]*2;
            p=0;
        }
        idx=arr[i];
    }
  counter+=idx;
   cout<<counter<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
    for(int i=0;i<v.size();i++)cout<<v[i]<<"\n";
}
