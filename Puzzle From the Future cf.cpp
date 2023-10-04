#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string d,a;

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            a+='1';
            if(s[i]=='0')d+='1';
            else d+='2';
        }
        else
        {
            if(s[i]=='0')
            {
                if(d[i-1]!='1')d+='1',a+='1';
                else d+='0',a+='0';
            }
            else if(s[i]=='1')
            {
                if(d[i-1]!='2')d+='2',a+='1';
                else d+='1',a+='0';
            }
        }
    }
    cout<<a<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
