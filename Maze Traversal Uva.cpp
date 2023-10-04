#include<bits/stdc++.h>
using namespace std;

int n,m;
int a,b;
char arr[100][100];
char dic[]={'N','E','S','W'};
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int idx=0;
void fun(char c)
{
    int tx=a+dx[idx];
    int ty=b+dy[idx];
   if(arr[tx][ty]=='*')return ;
    else
    {
        a=tx;
        b=ty;
    }
}

void solve()
{
    cin>>n>>m;
    getchar();
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        for(int j=0;j<m;j++)
        {
            arr[i][j]=s[j];
        }
    }
    idx=0;

  /*  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<arr[i][j];
        cout<<endl;
        }*/

    cin>>a>>b;
    a--;
    b--;
   getchar();

    while(1)
    {
        string s;
        getline(cin,s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        bool tr=false;
        for(int i=0;i<s.size();i++)
        {
          //  cout<<a<<" "<<b<<endl;
            if(s[i]=='Q')
            {
                tr=true;
                break;
            }
            else if(s[i]=='F')
            {
               fun(dic[idx]);
            }
            else if(s[i]=='L')
            {
               idx=(idx+3)%4;
            }
            else if(s[i]=='R')
            {
               idx=(idx+1)%4;
            }
        }
        if(tr)break;
    }

        cout<<a+1<<" "<<b+1<<" "<<dic[idx]<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
        if(q)cout<<endl;
    }
}
