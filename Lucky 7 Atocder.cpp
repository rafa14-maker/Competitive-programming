#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='7')flag++;
    }
    if(flag==0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
