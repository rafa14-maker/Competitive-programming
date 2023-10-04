#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        cnt+=(int)(s[i]-'0');
        cnt=cnt%9;
    }
    if(cnt==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
