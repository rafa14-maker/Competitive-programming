#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        long long a=0;
        long long ans=0;
        for(int i=0;i<n/2;i++)
        {
           a+=8;
           ans+=1ll*(a*(i+1));
        }
        cout<<ans<<endl;
    }
}
