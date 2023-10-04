#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n;
char arr[12][12];
int dp[10][10][10][10][10][10];

const int N = 120;
int test;

struct idx
{
    int dis;
    int a1;
    int a2;
    int b1;
    int b2;
    int c1;
    int c2;
}pk;

struct com{
    bool operator()(idx p1, idx p2)
    {
        return p1.dis < p2.dis;
    }
};



void solve()
{
   // cout<<"yes"<<endl;

   memset(dp,-1,sizeof dp);

   cin>>n;

   int i1,i2,j1,j2,i3,j3;
   vector<pair<int,int> >vp;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>arr[i][j];
           if(arr[i][j] == 'A')i1=i,j1=j;
           if(arr[i][j] == 'B')i2=i,j2=j;
           if(arr[i][j] == 'C')i3=i,j3=j;
           if(arr[i][j] == 'X')
           {
               vp.push_back(make_pair(i,j));
           }
       }
   }

     idx node;
     node.a1 = i1;
     node.a2 = j1;
     node.b1 = i2;
     node.b2 = j2;
     node.c1 = i3;
     node.c2 = j3;
     node.dis = 0;

   //  priority_queue<idx,vector<idx>,com>q;
   priority_queue<idx,vector<idx>,com>q;
     q.push(node);

     int cnt =0;

     while(!q.empty())
     {
         int i,j,a,b,k,p;
         idx f = q.top();
         q.pop();
         cnt++;
        if(cnt==1e5+5)break;
         i = f.a1;
         j = f.a2;
         a = f.b1;
         b = f.b2;
         k = f.c1;
         p = f.c2;
         int d = f.dis;
         //cout<<q.size()<<endl;

         if(dp[i][j][a][b][k][p]>d || dp[i][j][a][b][k][p] == -1)
         {
             dp[i][j][a][b][k][p] = d;


             int i1=i,j1=j,a1=a,b1=b,k1=k,p1=p;

            if(i+1<n&&arr[i+1][j]!='#')i1=i+1,j1=j;
           if(a+1<n&&arr[a+1][b]!='#')a1=a+1,b1=b;
           if(k+1<n&&arr[k+1][p]!='#')k1=k+1,p1=p;

            if(i1==a1&&j1==b1||i1==k1&&j1==p1)i1 = i,j1=j;
            if(a1==i1&&b1==j1||a1==k1&&b1==p1)a1 = a,b1 =b;
            if(k1==a1&&p1==b1||k1==i1&&p1==j1)k1 = k,p1 = p;

             if(i1!=i||j1!=j||a1!=a||b1!=b||p1!=p||k1!=k)
              {
            idx kc ;
             kc.a1 = i1;
             kc.a2 = j1;
              kc.b1 = a1;
               kc.b2 = b1;
               kc.c1 = k1;
                kc.c2 = p1;
                 kc.dis = d+1;
                q.push(kc);
                 }


            i1=i,j1=j,a1=a,b1=b,k1=k,p1=p;

            if(i-1>=0&&arr[i-1][j]!='#')i1=i-1,j1=j;
           if(a-1>=0&&arr[a-1][b]!='#')a1=a-1,b1=b;
           if(k-1>=0&&arr[k-1][p]!='#')k1=k-1,p1=p;

            if(i1==a1&&j1==b1||i1==k1&&j1==p1)i1 = i,j1=j;
            if(a1==i1&&b1==j1||a1==k1&&b1==p1)a1 = a,b1 =b;
            if(k1==a1&&p1==b1||k1==i1&&p1==j1)k1 = k,p1 = p;

             if(i1!=i||j1!=j||a1!=a||b1!=b||p1!=p||k1!=k)
              {
            idx kc ;
             kc.a1 = i1;
             kc.a2 = j1;
              kc.b1 = a1;
               kc.b2 = b1;
               kc.c1 = k1;
                kc.c2 = p1;
                 kc.dis = d+1;
            q.push(kc);
                 }

                   i1=i,j1=j,a1=a,b1=b,k1=k,p1=p;

            if(j-1>=0&&arr[i][j-1]!='#')i1=i,j1=j-1;
           if(b-1>=0&&arr[a][b-1]!='#')a1=a,b1=b-1;
           if(p-1>=0&&arr[k][p-1]!='#')k1=k,p1=p-1;

            if(i1==a1&&j1==b1||i1==k1&&j1==p1)i1 = i,j1=j;
            if(a1==i1&&b1==j1||a1==k1&&b1==p1)a1 = a,b1 =b;
            if(k1==a1&&p1==b1||k1==i1&&p1==j1)k1 = k,p1 = p;

             if(i1!=i||j1!=j||a1!=a||b1!=b||p1!=p||k1!=k)
              {
            idx kc ;
             kc.a1 = i1;
             kc.a2 = j1;
              kc.b1 = a1;
               kc.b2 = b1;
               kc.c1 = k1;
                kc.c2 = p1;
                 kc.dis = d+1;
                 q.push(kc);
                 }

            i1=i,j1=j,a1=a,b1=b,k1=k,p1=p;

            if(j+1<n&&arr[i][j+1]!='#')i1=i,j1=j+1;
           if(b+1<n&&arr[a][b+1]!='#')a1=a,b1=b+1;
           if(p+1<n&&arr[k][p+1]!='#')k1=k,p1=p+1;

            if(i1==a1&&j1==b1||i1==k1&&j1==p1)i1 = i,j1=j;
            if(a1==i1&&b1==j1||a1==k1&&b1==p1)a1 = a,b1 =b;
            if(k1==a1&&p1==b1||k1==i1&&p1==j1)k1 = k,p1 = p;

             if(i1!=i||j1!=j||a1!=a||b1!=b||p1!=p||k1!=k)
              {
            idx kc ;
             kc.a1 = i1;
             kc.a2 = j1;
              kc.b1 = a1;
               kc.b2 = b1;
               kc.c1 = k1;
                kc.c2 = p1;
                 kc.dis = d+1;
                 q.push(kc);
                 }
         }
     }

     int ans = 500;

     for(int i=0;i<vp.size();i++)
     {
         for(int j=0;j<vp.size();j++)
         {
             for(int k=0;k<vp.size();k++)
             {
                 if(i!=j&&j!=k&&i!=k)
                 {
                     int i1 = vp[i].first;
                     int i2 = vp[i].second;
                     int j1 = vp[j].first;
                     int j2 = vp[j].second;
                     int k1 = vp[k].first;
                     int k2 =vp[k].second;

                   if(dp[i1][i2][j1][j2][k1][k2]!=-1)  ans = min(ans,dp[i1][i2][j1][j2][k1][k2]);
                  }
             }
         }
     }


    if(ans >= 90)printf("Case %d: trapped\n",++test);
    else printf("Case %d: %d\n",++test,ans);

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
