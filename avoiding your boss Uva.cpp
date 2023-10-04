#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

int p,r,bh,of,yh,m;

int frr[105][105],arr[105][105];


bool f()
{
   for(int i=0;i<p;i++)
   {
       if(frr[bh][i]+frr[i][of]==frr[bh][of])
       {
           for(int j=0;j<p;j++)
           {
               arr[i][j]=N;
               arr[j][i]=N;
           }
       }
   }

   for(int i=0;i<p;i++)
   {
       arr[bh][i]=N;
       arr[i][bh]=N;
       arr[of][i]=N;
       arr[i][of]=N;
   }

}

void solve()
{
    for(int i=0;i<105;i++)for(int j=0;j<105;j++)frr[i][j]=N,arr[i][j]=N;

    for(int i=0;i<r;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
         frr[b][a]=frr[a][b]=c;
         arr[b][a]=arr[a][b]=c;
    }

   for(int k=0;k<p;k++)
     {
         for(int i=0;i<p;i++)
         {
             for(int j=0;j<p;j++)
             {
                 frr[i][j]=min(frr[i][j],frr[i][k]+frr[k][j]);
             }
         }
     }

     f();

  for(int k=0;k<p;k++)
     {
         for(int i=0;i<p;i++)
         {
             for(int j=0;j<p;j++)
             {
                 arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
             }
         }
     }

     int kp=arr[yh][m];


     if(kp==N)cout<<"MISSION IMPOSSIBLE."<<"\n";
     else cout<<kp<<"\n";


}

int main()
{
    while(cin>>p>>r>>bh>>of>>yh>>m)
    {
        bh--;
        of--;
        yh--;
        m--;
        solve();
    }
}

/*

6 7 2 6 1 4
1 2 1
1 3 1
2 4 1
4 3 1
1 6 1
5 6 1
4 5 1

*/
