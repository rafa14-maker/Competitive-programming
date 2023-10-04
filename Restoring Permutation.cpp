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
        int arr[n+5];
        int frr[2*n+5]={0};
        map<int,int>mp;
        for(int i=1;i<=n;i++)cin>>arr[i];
        for(int i=1,j=1;i<=2*n,j<=n;i+=2,j++)
        {
            frr[i]=arr[j];
            mp[frr[i]]++;
        }
        for(int i=2;i<=2*n;i+=2)
        {
            for(int j=1;j<=2*n;j++)
            {
                if(j>frr[i-1]&&mp[j]==0)
                {
                    frr[i]=j;
                    mp[frr[i]]=1;
                    break;
                }
            }
        }
        int counter=0;
        for(int i=1;i<=2*n;i++)
        {
            if(frr[i]==0)counter++;
        }
        // for(int i=1;i<=2*n;i++)cout<<frr[i]<<" ";cout<<"\n";
        if(counter==0)
        {
            for(int i=1;i<=2*n;i++)cout<<frr[i]<<" ";cout<<"\n";
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
