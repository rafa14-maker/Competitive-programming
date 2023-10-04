#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;

void solve()
{
    int frr[N]={0};
    int n;
    cin>>n;
    int two=0,four=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(frr[a]%4==3)four++;
        if(frr[a]%2==1)two++;
        frr[a]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        int a;
        cin>>c>>a;
        if(c=='+')
        {
            if(frr[a]%4==3)four++;
            if(frr[a]%2==1)two++;
            frr[a]++;
        }
        else
        {
            if(frr[a]%4==0)four--;
            if(frr[a]%2==0)two--;
            frr[a]--;
        }
        if(four>1||(four==1&&two>3))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
   // int q;
   // cin>>q;
   solve();
}
