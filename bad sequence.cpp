#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char>k;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')k.push(s[i]);
        else
        {
            char c='1';
            if(k.size()>0)c = k.top();
            if(c=='(')k.pop();
            else k.push(s[i]);
        }
    }
 //  cout<<k.size()<<endl;
    if(k.empty())
    {
        cout<<"Yes"<<endl;
    }
    else if(k.size()==2)
    {
        char a = k.top();
        k.pop();
        char b = k.top();
        k.pop();
        if(a=='('&&b==')')cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;

}
