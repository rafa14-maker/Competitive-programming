#include<bits/stdc++.h>
using namespace std;

int n;
int vis[100];

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}

void f(int mask)
{
    if(vis[mask]==1)return ;
     cout<<mask<<endl;
      vis[mask]=1;
  for(int i=0;i<n;i++)
  {
      if(!Check(mask,i))
      {
          f(Set(mask,i));
      }
  }

}

int main()
{

    cin>>n;
    f(0);
    for(int i=0;i<pow(2,n);i++)cout<<vis[i]<<" ";
}
