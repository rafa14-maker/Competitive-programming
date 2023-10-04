#include<bits/stdc++.h>
using namespace std;
using ll =long long;
ll arr[3],frr[3];

ll mn;

void f(ll krr[3],ll prr[3],ll sum)
{

    bool tr=false;

    for(int i=0;i<3;i++)
    {
        if(krr[i]>0)
        {
            for(int j=0;j<3;j++)
            {
                if(prr[j]>0)
                {
                    tr=true;
                    ll mn=(krr[i],prr[j]);
                    ll c=0;
                    if(i>j)
                    {
                        if(i==2)c=2;
                    }
                    else if(i<j)
                    {
                       if(j==2&&i==1) c=-2;
                    }
                    else c=0;

                    ll crr[3],rr[3];

                    for(int a=0;a<3;a++)crr[a]=krr[a],rr[a]=prr[a];

                    crr[i]-=mn;
                    rr[j]-=mn;

                    f(crr,rr,sum+(c*mn));

                }
            }
        }
    }
    if(!tr)
    {
        mn=max(mn,sum);
       // return;
    }
}

void solve()
{
   for(int i=0;i<3;i++)cin>>arr[i];
   for(int i=0;i<3;i++)cin>>frr[i];
   mn=-1e18;
   f(arr,frr,0);
   cout<<mn<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
   // solve();
}

