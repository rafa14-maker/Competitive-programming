#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,h;
        cin>>n;
        int m,k;
        cin>>m>>k;
        int a;
        bool cr=true;
        cin>>h;
        while(--n)
        {
            a=h;
            cin>>h;
            if(a-max(0,h-k)< -m)cr=false;
            m+=a-max(0,h-k);
        }
        if(cr)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
