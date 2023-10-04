#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

bool vis[N];
bool vis1[N];

void solve()
{
    for(int i=0;i<N;i++)vis[i]=false,vis1[i]=false;
    int n;
    cin>>n;
    int arr[n+5],frr[n+5],krr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(vis[arr[i]]==false)
        {
            vis[arr[i]]=true;
            vis1[arr[i]]=true;
            krr[i]=arr[i];
            frr[i]=arr[i];
        }
        else
        {
            krr[i]=0;
            frr[i]=0;
        }
    }

    if(n==1)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        return ;
    }

    int l=1,r=n;

    for(int i=0;i<n;i++)
    {
        if(frr[i]==0){
            while(vis[l]==true)l++;
         //   while(vis[r]==true)r--;
            vis[l]=true;
          // vis[r]=true;
            frr[i]=l;
       //     krr[i]=r;
        }
    }

      for(int i=0;i<n;i++)
    {
        if(krr[i]==0){
          //  while(vis[l]==true)l++;
           while(vis1[r]==true)r--;
         //   vis[l]=true;
           vis1[r]=true;
         //   frr[i]=l;
            krr[i]=r;
        }
    }

     for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;

    int a,b;

    for(int i=0;i<n;i++)
    {
        if(frr[i]==1)a=i;
        if(frr[i]==2)b=i;
    }
    swap(frr[a],frr[b]);

    for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;
   //  for(int i=0;i<n;i++)cout<<krr[i]<<" ";cout<<endl;


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
