#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<string>vs;
bool ch[30];
int test;

void f(string s)
{
    if(vs.size()==k)return ;
    if(s.size()==n)
    {
        vs.push_back(s);
        return ;
    }
    for(int i=0;i<n;i++)
    {
        if(!ch[i])
        {
            ch[i]=true;
            char c=(char)('A'+i);
            f(s+c);
            ch[i]=false;
        }
    }
}

void solve()
{
    vs.clear();
    cin>>n>>k;
    memset(ch,false,sizeof ch);
    f("");
    printf("Case %d:\n",++test);
    for(int i=0;i<vs.size();i++)cout<<vs[i]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
