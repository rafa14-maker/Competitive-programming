#include<bits/stdc++.h>
using namespace std;

int n,m,k;
bool vis[1050][1050];
string st;

void ch(char c)
{
    if(c=='a')printf("fill A\n");
    if(c=='b')printf("fill B\n");
    if(c=='c')printf("pour B A\n");
    if(c=='d')printf("pour A B\n");
    if(c=='e')printf("empty A\n");
    if(c=='f')printf("empty B\n");
}

void f(string s,int a,int b)
{
    if(vis[a][b])return;
    vis[a][b]=true;
    if(st.size()>0)return;
    if(a==k||b==k)
    {
        st=s;
        return ;
    }
    f(s+'a',n,b);
    f(s+'b',a,m);
    f(s+'e',0,b);
    f(s+'f',a,0);
    int idx1,idx2;

    if(b>0&&a<n)
    {
        idx1=n-a;
        int mn=min(idx1,b);
        b-=mn;
        a+=mn;
        f(s+'c',a,b);
        a-=mn;
        b+=mn;
    }

    if(a>0&&b<m)
    {
         idx1=m-b;
        int mn=min(idx1,a);
        a-=mn;
        b+=mn;
        f(s+'d',a,b);
        a+=mn;
        b-=mn;
    }

}

void solve()
{
    st="";
    memset(vis,false,sizeof vis);
    f("",0,0);
    for(int i=0;i<st.size();i++)
    {
        ch(st[i]);
    }
    printf("success\n");
}

int main()
{
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        solve();
    }
}
