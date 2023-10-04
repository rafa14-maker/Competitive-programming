#include<bits/stdc++.h>
using namespace std;

using ll =long long;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>sm;
        vector<ll>kp;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a<k)sm.push_back(a);
            else kp.push_back(a);
        }
        ll sum=0;
        for(int i=0;i<kp.size();i++)
        {
            sum+=(abs(kp[i]-k));
            kp[i]=k;
        }
        sort(sm.begin(),sm.end());
        reverse(sm.begin(),sm.end());
        int flag=0;
        for(int i=0;i<sm.size();i++)
        {
            ll io=abs(sm[i]-k);
            if(io<=sum)
            {
                sm[i]+=io;
                sum-=io;
                flag++;
            }
        }
        cout<<flag+kp.size()<<"\n";
    }
}
