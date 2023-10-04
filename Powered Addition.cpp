#include<bits/stdc++.h>
using namespace std;

using ll= long long;
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        int n;
        scanf("%d",&n);
        ll arr[n+5];
        for(int i=0;i<n;i++)
        {
              scanf("%lld",&arr[i]);
              //cout<<arr[i]<<endl;
        }
        ll kp=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1])continue;
            else
            {
                ll k =abs(arr[i]-arr[i-1]);
                arr[i]=arr[i-1];
               // cout<<k<<endl;
                kp=max(kp,k);
            }
        }
        ll time=0;

     //   cout<<kp<<endl;
        for(int i=0;i<=30;i++)
        {
            ll p = i+1;
            if(Check(kp,i))time=max(time,p);
        }
        cout<<time<<endl;
    }

}
