#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(i%2==0)
        {
            if(str[i]!='a')str[i]='a';
            else str[i]='b';
        }
        else
        {
            if(str[i]!='z')str[i]='z';
            else str[i]='y';
        }
    }
    cout<<str<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
