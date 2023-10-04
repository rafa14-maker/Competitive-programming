#include<bits/stdc++.h>
using namespace std;

int q;

void solve()
{
    int n,m;
    cin>>n>>m;
    getchar();
    int arr[n+5][m+5];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            arr[i][j]=0;
        }
    }

   arr[1][1]=1;

    for(int i=0;i<n;i++)
    {
         string str;
    getline(cin,str);
    stringstream ss;
    ss<<str;
    vector<int>v;
    int val;
    while(ss>>val)
    {
        v.push_back(val);
    }

    int idx = v[0];

    for(int i=1;i<v.size();i++)
    {
        arr[idx][v[i]]= -1;
    }

    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]==-1)continue;
            if(i+1<=n&&arr[i+1][j]!=-1)arr[i+1][j]+=arr[i][j];
            if(j+1<=m&&arr[i][j+1]!=-1)arr[i][j+1]+=arr[i][j];
        }
    }

   /* for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  */

   if(q!=1)cout<<"\n";
    cout<<arr[n][m]<<"\n";


}

int main()
{
    int t;
    cin>>t;
    for(q=1;q<=t;q++)solve();
}
