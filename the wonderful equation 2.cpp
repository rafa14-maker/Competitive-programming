#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    long long tmp=sqrt(n);
    if(tmp*tmp!=n)
    {
        cout<<0<<endl;
        return ;
    }
    int cnt=0;
    for(int i=0;i<=1e4;i++)
    {
        for(int j=0;j<=1e4;j++)
        {
            int k=tmp-(i*i)-(j*j);
            if())cnt++;
        }
    }
    cout<<cnt<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
