#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

int dis[15][15][15][15];
char arr[15][15];
int n;

void cal()
{
      for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           for(int a=1;a<=n;a++)
           {
               for(int b=1;b<=n;b++)
               {
                   dis[i][j][a][b] = 500+5;
               }
           }
       }
   }
}

int f(int ik,int jk,int ak,int bk)
{
   arr[ak][bk] = '.';
   arr[ik][jk] = '.';

    for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(arr[i][j]!='.')continue;
      //     cout<<"yes"<<endl;
              dis[i][j][i][j] = 0;
           if(i+1<=n&&arr[i+1][j]=='.')dis[i][j][i+1][j]=1,dis[i+1][j][i][j]=1;
           if(i-1>=1&&arr[i-1][j]=='.')dis[i][j][i-1][j]=1,dis[i-1][j][i][j]=1;
           if(j+1<=n&&arr[i][j+1]=='.')dis[i][j][i][j+1]=1,dis[i][j+1][i][j]=1;
           if(j-1>=1&&arr[i][j-1]=='.')dis[i][j][i][j-1]=1,dis[i][j-1][i][j]=1;
       }
   }

   for(int k1=1;k1<=n;k1++)
   {
       for(int k2=1;k2<=n;k2++)
       {
           for(int a=1;a<=n;a++)
           {
               for(int b=1;b<=n;b++)
               {
                   for(int i=1;i<=n;i++)
                   {
                       for(int j=1;j<=n;j++)
                       {
                           dis[i][j][a][b] = min(dis[i][j][a][b],dis[i][j][k1][k2]+dis[k1][k2][a][b]);
                       }
                   }
               }
           }
       }
   }

  /*  for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
         cout<<arr[i][j]<<" ";
       }cout<<endl;
   }  */


   return dis[ik][jk][ak][bk];


}

void solve()
{
   // cout<<"yes"<<endl;

  // int n;
   cin>>n;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)cin>>arr[i][j];
   }

   cal();

   vector<pair<int,int> >v;

   for(char c = 'A';c<='Z';c++)
   {
       for(int i=1;i<=n;i++)
        {
             for(int j=1;j<=n;j++)
          {
                if(arr[i][j]==c)
               {
                  v.push_back(make_pair(i,j));
              }
          }
        }
   }

   int sum = 0 ;


   for(int i=0;i<v.size()-1;i++)
   {
       int a = v[i].first;
       int b = v[i].second;
       int a2 = v[i+1].first;
       int b2 = v[i+1].second;
     //  cout<<a<<" "<<b<<" "<<a2<<" "<<b2<<" "<<endl;
      int k = f(a,b,a2,b2);
      if(k == 505)
      {
         // cout<<"Impossible"<<endl;
          printf("Case %d: Impossible\n",++test);
          return ;
      }
     // cout<< k<<endl;
       sum += k;
   }

//   cout << v.size() << endl;

    printf("Case %d: %d\n",++test,sum);


}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

