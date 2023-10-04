#include<bits/stdc++.h>
using namespace std;

string s;
vector<int>adj[30];
char parent[30];
int test;

void cal()
{
    for(int i=0;i<30;i++)adj[i].clear();
    memset(parent,0,sizeof parent);
    char par='0';
    for(int i=0;i<s.size();i++)
    {
      //   cout<<s[i]<<" "<<par<<endl;
        if(i==0)
        {
            int k=s[i]-'A';
            parent[k]='0';
            par=s[i];
        }
        else
        {
         //  cout<<s[i]<<" "<<par<<endl;
            if(s[i]!=par)
            {
             //   cout<<s[i]<<" "<<par<<endl;
                int k=s[i]-'A';
                int kp=par-'A';
                adj[k].push_back(kp);
               adj[kp].push_back(k);
                parent[k]=par;
                par=s[i];
            }
           else
            {
                int k=s[i]-'A';
                par=parent[k];
            }
        }
    }
    printf("Case %d\n",++test);
    for(int i=0;i<30;i++)
    {
        if(adj[i].size()>0)
        {
            char a='A'+i;
            cout<<a<<" = "<<adj[i].size()<<endl;
        }
    }
}

void solve()
{
    cin>>s;
    cal();
}

int main()
{
    int q;
    cin>>q;
  //  getchar();
    while(q--)solve();
}
