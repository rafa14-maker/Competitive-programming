#include<bits/stdc++.h>
using namespace std;

string s;
map<string,int>mp;
int n;

int counter=0;

void f(string frr,int a,int b,int c)
{
     //cout<<frr<<endl;
       if(frr.size()>s.size())return;

    if(a>0&&b>0&&c>0&&(frr<=s||frr.size()<s.size()))
    {
       // cout<<frr<<endl;
        if(mp[frr]==0)
        {
            counter++;
            mp[frr]=1;
        }
    }

    string krr,arr,lrr;
    krr=frr;
    arr=frr;
    lrr=frr;
    f(krr+='3',a+1,b,c);
    f(arr+='5',a,b+1,c);
    f(lrr+='7',a,b,c+1);
}

int main()
{
   cin>>s;
   n=s.size();
    string frr;
    f(frr,0,0,0);
    cout<<counter<<endl;
}
