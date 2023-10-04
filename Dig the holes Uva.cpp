#include<bits/stdc++.h>
using namespace std;

bool  check(string s,string frr,int a,int b)
{
    int cnt=0,cnt2=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==frr[i])cnt++;
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<frr.size();j++)
        {
            if(s[i]==frr[j]&&i!=j)cnt2++;
        }
    }
    if(cnt==a&&cnt2==b)return true;
    return false;
}

void solve()
{
    string st,sr;
    int l1,r1,l2,r2;
    cin>>st>>l1>>r1;
    cin>>sr>>l2>>r2;
    char arr[]={'B','G','O','R','Y','V'};
    bool tr=false;
    do
    {
        string s;

        for(int i=0;i<4;i++)s+=arr[i];

        if(check(s,st,l1,r1)&&check(s,sr,l2,r2))tr=true;

    }while(next_permutation(arr,arr+6));

    if(tr)cout<<"Possible"<<endl;
    else cout<<"Cheat"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
