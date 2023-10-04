#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string arr="microsoft";
    bool tr=true;
    for(int i=0;i<arr.size();i++)
    {
        bool kp=true;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==arr[i])
            {
               // s[j]='9';
                kp=false;
                break;
            }
        }
        if(kp)tr=false;
    }
    if(tr)cout<<"We both love Microsoft!"<<endl;
    else cout<<"Only I love Microsoft!"<<endl;
}
