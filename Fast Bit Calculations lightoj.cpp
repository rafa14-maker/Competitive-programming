#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    long long n;
    cin>>n;
    string s;
    while(n>0)
    {
        if(n%2==0)s+='0';
        else s+='1';
        n/=2;
    }
    reverse(s.begin(),s.end());
     int cnt=0;
     for(int i=0;i<s.size();i++)
     {
         if(i+1<s.size()&&s[i]==s[i+1]&&s[i]=='1')cnt++;
     }
     printf("Case %d: %d\n",++test,cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
