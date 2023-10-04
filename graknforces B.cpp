#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    set<int>sk;
    int kp=0;
    bool tr=true;
    int idx=-1,mk=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==0)kp=1;
        sk.insert(a);
        if(idx==-1)idx=a;
        else if(idx!=a)tr=false;
        mk=max(a,mk);
    }
    if(tr)
    {
        cout<<1<<endl;
        return ;
    }
    else if(k==1)
    {
        if(sk.size()<=k)cout<<1<<endl;
        else cout<<-1<<endl;
        return ;
    }
    int len=sk.size();
    if(len+1>k*n)cout<<-1<<endl;
   else if(len<=k)cout<<1<<endl;
   else
   {
       int a=1;
       len-=k;
       a+=(len/(k-1));
       if(len%(k-1)!=0)a++;
       cout<<a<<endl;
   }


}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

