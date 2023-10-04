#include<bits/stdc++.h>
using namespace std;

int out[25];
int arr[25][25];
bool vis[25];
int sum=0;
bool tr=false;

void check(string s)
{
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(i!=j&&s[i]==s[j])return ;
        }
    }
  //  bool tr=true;
    for(int i=0;i<s.size()-1;i++)
    {
        int a = (int)(s[i]-'0');
        int b = (int)(s[i+1]-'0');
        if(arr[a][b]||arr[b][a])
        {
            return ;
        }
    }

    sum++;

     for(int i=0;i<s.size()-1;i++)
    {
        int a = (int)(s[i]-'0');
        int b = (int)(s[i+1]-'0');
        arr[a][b]=true;
        arr[b][a]=true;
    }



}

void dfs(int pos,string s,int n)
{
    if(pos==n)
    {
       // cout<<s<<endl;
        check(s);
        return ;
    }
   for(int i=1;i<=n;i++)
   {
       dfs(pos+1,s+(char)('0'+i),n);
   }
}

int main()
{
   /* int n;
    cin>>n;
   // for(int i=1;i<=n;i++)out[i]=n;
  //  for(int i=1;i<=n;i++)vis[i]=false;
    for(int i=1;i<=25;i++)
    {
        for(int j=1;j<=25;j++)arr[i][j]=false;
    }
   // for(int i=1;i<=n;i++)
   // {
   //    cout<<"yes"<<endl;
       // tr=false;
       //  for(int j=1;j<=n;j++)vis[j]=false;
        dfs(0,"",n);
 //   }
    cout<<sum<<endl;*/

    int n;
    int test=0;
    while(1)
    {
        cin>>n;
        if(n==0)break;
       // int idx = (n-1)/2;
       // if(n==4)idx=2;
       // if(n<=3)idx=1;
        printf("Case %d: %d\n",++test,n/2);
    }

}
