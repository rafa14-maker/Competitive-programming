#include<bits/stdc++.h>
using namespace std;

string s;
double val[]={12.53,1.42,4.68,5.86,13.68,0.69,1.01,0.70,6.25,0.44,0.00,4.97,3.15,
               6.71,8.68,2.51,0.88,6.87,7.98,4.63,3.93,0.90,0.02,0.22,0.90,0.52};

bool tr;
double mx;

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

bool kop(string frr)
{
    for(int i=0;i<frr.size();i++)
    {
        if(frr[i]!=s[i])return true;
    }
    return false;
}

double cal(string frr)
{
    double cnt=0;
    for(int i=0;i<frr.size();i++)
    {
        int idx=(int)frr[i]-'a';
        cnt+=(i+1)*(val[idx]);
    }
  //  cout<<frr<<" "<<cnt<<endl;
    return cnt;
}

void f(int mk,string frr)
{
    bool kp=true;
    for(int i=0;i<s.size();i++)
    {
        if(!Check(mk,i))
        {
            kp=false;
            f(Set(mk,i),frr+s[i]);
        }
    }
    if(kp)
    {
        if(kop(frr))
        {
            if(mx<=cal(frr))
            {
                tr=true;
            }
        }
        return;
    }
}

void solve()
{
    cin>>s;
    tr=false;
    mx=cal(s);
    f(0,"");
    if(tr)cout<<"above or equal"<<endl;
    else cout<<"below"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
