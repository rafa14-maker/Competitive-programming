#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="1"||s=="4"||s=="78")cout<<"+"<<endl;
        else
        {
            int len=s.size()-1;
            if(s[len-1]=='3'&&s[len]=='5')cout<<"-"<<endl;
            else if(s[0]=='9'&&s[len]=='4')cout<<"*"<<endl;
            else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')cout<<"?"<<endl;
        }
    }
}
