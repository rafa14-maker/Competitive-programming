#include<bits/stdc++.h>
using namespace std;

int  main()
{
    string s;
    cin>>s;
    int cnt=0,idx=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='R')
        {
            cnt++;
            idx=max(idx,cnt);
        }
        else cnt=0;
    }
    cout<<idx<<endl;
}
