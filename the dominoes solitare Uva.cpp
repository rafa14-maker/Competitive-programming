#include<bits/stdc++.h>
using namespace std;
int n,m;
int a,b;
int arr[20],frr[20];

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

bool tr;

void f(int mk,int cnt,int pre)
{
   // cout<<mk<<endl;
    if(cnt==n)
    {
        if(pre==b)tr=true;
        return;
    }
    for(int i=0;i<m;i++)
    {
        if(!Check(mk,i)&&(arr[i]==pre||frr[i]==pre))
        {
          if(arr[i]==pre)  f(Set(mk,i),cnt+1,frr[i]);
          else if(frr[i]==pre)f(Set(mk,i),cnt+1,arr[i]);
        }
    }
}

void solve()
{
    cin>>m;
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    a=b1;
    b=a2;
    for(int i=0;i<m;i++)cin>>arr[i]>>frr[i];
    tr=false;
    f(0,0,a);
    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}
