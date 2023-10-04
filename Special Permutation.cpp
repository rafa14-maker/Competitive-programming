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
        if(n<4)cout<<-1<<endl;
        else
        {
            int k=n;
            if(n%2==0)k=n-1;
             for(int i=k;i>=1;i-=2)cout<<i<<" ";
             if(n>=4)cout<<4<<" ";
             if(n>=2)cout<<2<<" ";
             for(int i=6;i<=n;i+=2)cout<<i<<" ";
             cout<<endl;
        }
    }
}
