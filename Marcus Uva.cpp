#include<bits/stdc++.h>
using namespace std;

int n,m;
char frr[10][10];
char arr[]={'I','E','H','O','V','A','#'};

void f(int i,int j)
{
  //  cout<<i<<" "<<j<<endl;
    if(frr[i][j]=='#')
    {
        return;
    }
    if(i-1>=0)
    {
        bool tr=false;
        for(int k=0;k<7;k++)
        {
            if(arr[k]==frr[i-1][j])tr=true;
        }
        if(tr)
        {
            if(frr[i][j]=='@')cout<<"forth";
           else cout<<" forth";
           frr[i][j]='9';
            f(i-1,j);
            return;
        }
    }
    if(j-1>=0)
    {
         bool tr=false;
        for(int k=0;k<7;k++)
        {
            if(arr[k]==frr[i][j-1])tr=true;
        }
        if(tr)
        {
             if(frr[i][j]=='@')cout<<"left";
           else cout<<" left";
            frr[i][j]='9';
           // cout<<" left";
            f(i,j-1);
           return;
        }
    }
     if(j+1<m)
    {
         bool tr=false;
        for(int k=0;k<7;k++)
        {
            if(arr[k]==frr[i][j+1])tr=true;
        }
        if(tr)
        {
             if(frr[i][j]=='@')cout<<"right";
           else cout<<" ";
           frr[i][j]='9';
            f(i,j+1);
           return;
        }
    }
}

void solve()
{
    cin>>n>>m;
    int idx1=0,idx2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>frr[i][j];
            if(frr[i][j]=='@')idx1=i,idx2=j;
        }
    }
   f(idx1,idx2);
    cout<<endl;


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
