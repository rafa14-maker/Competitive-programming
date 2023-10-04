#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<=999;i++)
    {
        for(int j=i;j<=999;j++)
        {
            int k=n-(i*i)-(j*j);
            if(k<0)continue;
            int p=sqrt(k);
            if(p*p!=k)continue;
            if((i*i)+(j*j)+k==n&&p>=j)
            {
                cout<<i<<" "<<j<<" "<<p<<endl;
                return ;
            }
        }
    }
    cout<<-1<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
