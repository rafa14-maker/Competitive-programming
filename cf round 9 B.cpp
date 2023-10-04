#include<bits/stdc++.h>
using namespace std;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using ll =long long;

void solve()
{
   int n,m;
   cin>>n>>m;
   int arr[n+5][m+5];
   bool tr=false;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>arr[i][j];
           if(arr[i][j]>4)tr=true;
       }
   }
    if(tr)
    {
        cout<<"NO"<<endl;
        return ;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum=arr[i][j];
            if(sum>0&&i-1>=0&&arr[i-1][j]==0)arr[i-1][j]+=1,sum--;
            if(sum>0&&i+1<n&&arr[i+1][j]==0)arr[i+1][j]+=1,sum--;
            if(sum>0&&j-1>=0&&arr[i][j-1]==0)arr[i][j-1]+=1,sum--;
            if(sum>0&&j+1<m&&arr[i][j+1]==0)arr[i][j+1]+=1,sum--;
        }
    }

    tr=false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)continue;
            int sum=0;
            if(i-1>=0&&arr[i-1][j]>0)sum++;
            if(i+1<n&&arr[i+1][j]>0)sum++;
            if(j-1>=0&&arr[i][j-1]>0)sum++;
            if(j+1<m&&arr[i][j+1]>0)sum++;
            if(sum<arr[i][j])tr=true;
            else arr[i][j]=sum;
        }
    }

   if(tr)
    {
        cout<<"NO"<<endl;
        return;
    }
   cout<<"YES"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}

int main()
{
    FasterIO
    int q;cin>>q;while(q--)solve();

   // solve();
}

