#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;
ll sum;
ll arr[105][105];
bool vis[105][105];

void fk(int a,int b,int c,int d,int e,int f,int g,int h)
{
 //   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
    if(a>=n||c>=n||e>=n||g>=n)return ;
    if(b>=m||d>=m||f>=m||h>=m)return ;
    if(a<0||b<0||c<0||d<0||e<0||f<0||g<0||h<0)return ;
    if(vis[a][b]||vis[c][d]||vis[e][f]||vis[g][h])return ;

    vis[a][b]=true;
    vis[c][d]=true;
    vis[e][f]=true;
    vis[g][h]=true;

    if(a==e&&b==f)
    {
        if(arr[a][b]!=arr[c][d])
        {
            ll idx = arr[a][b]+arr[c][d];
            idx/=2;
            sum += abs(arr[a][b]-idx);
            sum+= abs(arr[c][d]-idx);
        }
    }
    else if(a==c&&b==d)
    {
       if(arr[a][b]!=arr[e][f])
       {
           ll idx = arr[a][b]+arr[e][f];
            idx/=2;
            sum += abs(arr[a][b]-idx);
            sum+= abs(arr[e][f]-idx);
       }
    }


    else
    {
       vector<ll>v;
       v.push_back(arr[a][b]); v.push_back(arr[c][d]);
       v.push_back(arr[e][f]); v.push_back(arr[g][h]);
       sort(v.begin(),v.end());

       ll pdx = 0;

      for(int i = 0 ;i<v.size();i++)
      {
          pdx+= abs(v[i]-v[1]);
      }

      sum+=pdx;

    }

    fk(a,b+1,c,d-1,e,f+1,g,h-1);
    fk(a+1,b,c+1,d,e-1,f,g-1,h);
    fk(a+1,b+1,c+1,d-1,e-1,f+1,g-1,h-1);
}

void solve()
{
    cin>>n>>m;
    sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>arr[i][j];
    }
    memset(vis,false,sizeof vis);
    fk(0,0,0,m-1,n-1,0,n-1,m-1);
     cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
