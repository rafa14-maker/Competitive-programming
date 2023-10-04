#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            int k=i*3+j*5;
            int pk=n-k;
            if(pk<0)continue;
            if(pk%7==0)
            {
                cout<<i<<" "<<j<<" "<<pk/7<<endl;
                return ;
            }
        }
    }
    cout<<-1<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


