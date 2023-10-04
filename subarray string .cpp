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
        int frr1[n+5],frr2[n+5];
        for(int i=0;i<n;i++)frr1[i]=0,frr2[i]=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            frr1[a]++;
        }
        for(int i=0;i<n;i++)
        {
           int a;
           cin>>a;
           frr2[a]++;
        }
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(frr1[i]!=frr2[i])
            {
                counter++;
                break;
            }
        }
        if(counter==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
