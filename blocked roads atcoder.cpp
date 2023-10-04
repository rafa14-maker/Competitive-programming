#include<bits/stdc++.h>
using namespace std;
const int N = 1e8+7;

long long arr[500][500];
int n,m;

void war()
{
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=N;
        }
        arr[i][i]=N;
    }
    vector<pair<int,int> >v;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        arr[a][b]=1;
       arr[b][a]=1;
    }

    for(int i=0;i<v.size();i++)
    {

    int a = v[i].first;
    int b = v[i].second;

  //  cout<<a<<" "<<b<<endl;

    arr[a][b]= N;
    arr[b][a]= N;

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
            }
        }
    }

  //  arr[a][b]=1;
  //  arr[b][a]=1;

 // cout<<a<<" "<<b<<" "<<arr[a][b]<<endl;

    if(arr[1][n]==N)cout<<-1<<endl;
    else cout<<arr[1][n]<<endl;

    arr[a][b]=1;
    arr[b][a]=1;

    }
}

void solve()
{
  //  int n,m;
    cin>>n>>m;

   // int frr
    war();
}

int main()
{
    solve();
}
