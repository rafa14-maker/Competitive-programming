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
        if(n==1)cout<<-1<<endl;
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(i==n)cout<<4;
                else cout<<5;

            }cout<<endl;
        }
    }
}
