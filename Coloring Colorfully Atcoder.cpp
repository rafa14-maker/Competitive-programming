#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            if(s[i]=='1')s[i]='0';
            else s[i]='1';
            counter++;
        }
    }
    cout<<counter<<endl;
}
