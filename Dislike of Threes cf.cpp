#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=2000;i++)
    {
        if(i%3!=0&&(i%10!=3))n--;
        if(n==0)
        {
            cout<<i<<endl;
            return ;
        }
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
