#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s,k;
    cin>>k>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'){
        if(i-1>=0&&k[i-1]=='1')
        {
            cnt++;
            k[i-1]='2';
        }
        else if(k[i]=='0')
        {
            cnt++;
            k[i]='2';
        }
        else if(i+1<s.size()&&k[i+1]=='1')
        {
            cnt++;
            k[i+1]='2';
        }
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
