#include<bits/stdc++.h>
using namespace std;

int arr[5];
int vis[5];
bool tr;

void f(int pos,int sum)
{
   if(pos==5)
   {
       if(sum==23)tr=true;
       return;
   }
   for(int i=0;i<5;i++)
   {
       if(!vis[i]){
            vis[i]=1;
       f(pos+1,sum+arr[i]);
       f(pos+1,sum*arr[i]);
       f(pos+1,sum-arr[i]);
            vis[i]=0;
       }
   }
}

void solve()
{
    tr=false;
    for(int i=0;i<5;i++)
    {
       vis[i]=1;
       f(1,arr[i]);
       vis[i]=0;
    }
    if(tr)cout<<"Possible"<<endl;
    else cout<<"Impossible"<<endl;
}

int main()
{
    while(1)
    {
        bool kp=false;
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
            if(arr[i]!=0)kp=true;
        }
            if(!kp)break;
        solve();
    }
}
