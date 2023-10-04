#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string frr;

        bool tr=false;

        for(int i=0;i<s.size();i++)if(i+1<s.size()&&s[i]>s[i+1])tr=true;

        if(!tr)
        {
            cout<<s<<endl;
            continue;
        }


        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')break;
            frr+='0';
        }
        frr+='0';
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')break;
            frr+='1';
        }
        cout<<frr<<endl;
    }
}
