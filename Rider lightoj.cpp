#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int x[]={1, 1, 2, 2,-1,-1,-2,-2};
int y[]={2, -2,1,-1, 2,-2, 1,-1};
const int N = 1e5+5;

char arr[15][15];
int frr[15][15][15][15];
vector<pair<int,int> >v;
int n,m;

void f()
{
  // cout << v.size() << endl;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           for(int a=1;a<=n;a++)
           {
               for(int b=1;b<=m;b++)
               {
                   if(i==a&&j==b)frr[i][j][a][b]=0;
                   else  frr[i][j][a][b] = N;
               }
           }
       }
   }

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           for(int a=0;a<8;a++)
           {
               int x1 = i+x[a];
               int y1 = j+y[a];
               if(i==x1&&j==y1)continue;
               if(x1>=1&&x1<=n&&y1>=1&&y1<=m)
               {
                   frr[i][j][x1][y1]=1;
               }
           }
       }
   }

}

void warshell()
{
    for(int k1=1;k1<=n;k1++)
   {
       for(int k2=1;k2<=m;k2++)
       {
           for(int i=1;i<=n;i++)
           {
               for(int j=1;j<=m;j++)
               {
                   for(int a=1;a<=n;a++)
                   {
                       for(int b=1;b<=m;b++)
                       {
                           if(i==a&&j==b)continue;
                           frr[i][j][a][b] = min(frr[i][j][a][b],frr[i][j][k1][k2]+frr[k1][k2][a][b]);
                       }
                   }
               }
           }
       }
   }
}

int test;

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>m;

   v.clear();

    for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           cin>>arr[i][j];
           if(arr[i][j]>='1'&&arr[i][j]<='9')v.push_back(make_pair(i,j));
       }
   }

   f();

   warshell();

   int ans = N;
   int ix = 0, jx = 0;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           int cnt = 0;
           for(int a=0;a<v.size();a++)
           {
               int s = v[a].first;
               int f = v[a].second;
               if(i==s&&j==f)continue;
               //cnt += frr[i][j][s][f];
               int idx = frr[i][j][s][f];
               int k = (int)(arr[s][f]-'0');
                if(idx>=k)
                {
                    cnt+= (idx/k);
                    if(idx%k!=0)cnt++;
                }
                else
                {
                    cnt++;
                }
           }
           ans = min(ans,cnt);
       }
   }

  // cout << ix<<" "<<jx<<endl;

   /*     for(int a=0;a<v.size();a++)
           {
               int s = v[a].first;
               int f = v[a].second;
            //   cout << s<< " "<<f<<endl;
           //  cout<< frr[ix][jx][s][f]<<endl;
           }*/


   if(ans >= 500)printf("Case %d: -1\n",++test);
   else printf("Case %d: %d\n",++test,ans);


}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
  int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
3 3
...
5.5
...


*/

