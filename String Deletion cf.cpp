#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int idx=0,pre=0,cnt=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            idx=i;
            break;
        }
    }
     if(idx>=1)pre+=1;

   // cout<<idx<<endl;

    for(int i=idx;i<s.size();i++)
    {
        if(s[i]=='1')pre++;
    }
    if(pre==0)pre=1;
    cout<<pre<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
