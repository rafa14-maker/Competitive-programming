#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int idx;
        cin>>idx;
        idx--;
        vector<int>v(s.size());
        for(int i=s.size();i;i--)
        {
            v[i-1]=idx%i;
            idx/=i;
        }
        vector<char>c;
        for(int i=0;i<s.size();i++)
        {
            c.insert(c.begin()+v[i],s[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    }
}
