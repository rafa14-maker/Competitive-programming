#include<bits/stdc++.h>
using namespace std;

vector<int>adj[20];
vector<int>v;
int n;

int f()
{
    map<int,int>m;
   int counter=0;

   for(int i=1;i<=n;i++)
   {
       m[i]=1;
   }
   for(int i=0;i<v.size();i++)
   {
       m[v[i]+1]=2;
   }


  // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    bool he = true;
    for(int i=0;i<v.size();i++)
   {
       int  k=v[i]+1;
    //   cout<<v[i]<<endl;
       for(int j=0;j<adj[k].size();j+=2)
       {
           if(adj[k][j+1]==0&&m[adj[k][j]]==2)
           {
              he=false;
              break;
           }
           else if(adj[k][j+1]==1&&m[adj[k][j]]==1)
           {
               he=false;
               break;
           }
       }
   }
   return he;

}

int main()
{
  //  int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        for(int j=0;j<a;j++)
        {
            int c,d;
            cin>>c>>d;
            adj[i].push_back(c);
            adj[i].push_back(d);
        }
    }


    int sum=0;
    for(int i=1;i<pow(2,n);i++)
    {
        //vector<int>v;
        v.clear();
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(j);
            }
        }
      // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
        int p;
        if(f())p=v.size();
        else p=0;
       sum=max(p,sum);
    }
    cout<<sum<<endl;

}
