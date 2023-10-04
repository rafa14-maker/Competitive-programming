#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int frr[10005];
int arr[105][105];

void solve()
{
   // cout<<"yes"<<endl;
   int n,m,p,q;
   //cin>>n>>m>>p>>q;
   scanf("%d",&n);
    scanf("%d",&m);
     scanf("%d",&p);
      scanf("%d",&q);


   for(int i = 1 ;i<=n;i++)
   {
       for(int j=1;j<=m;j++)arr[i][j] = 1e8+7;
   }

  // int frr[p+5];

   queue<pair<int,pair<int,int> > >pq;

   for(int i=0;i<p;i++)
   {
       int l,r;
      // cin>>l>>r;
      scanf("%d",&l);
      scanf("%d",&r);
       pq.push(make_pair(1,make_pair(l,r)));
   }

   while(!pq.empty())
   {
       pair<int,pair<int,int> >f = pq.front();
       pq.pop();
       int d = f.first;
       int a = f.second.first;
       int b = f.second.second;
       if(a<1||a>n||b<1||b>m||d==1e8+7)continue;
      if(arr[a][b]>d)
      {
          arr[a][b] =d;
          pq.push(make_pair(d+1,make_pair(a+1,b)));
          pq.push(make_pair(d+1,make_pair(a-1,b)));
          pq.push(make_pair(d+1,make_pair(a,b+1)));
          pq.push(make_pair(d+1,make_pair(a,b-1)));
      }

   }

   int time  = n*m +5;

   frr[0]= p;

   for(int i=1;i<time ;i++)frr[i] = 0;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++ )
       {
           int v = arr[i][j];
          if(v!=1e8+7&&v<=n+m) frr[v]++;
       }
   }

 // for(int i=1;i<time;i++)cout<<frr[i]<<" ";cout<<endl;

   for(int i=2;i<=n+m;i++)frr[i]+=frr[i-1];

  // for(int i=1;i<time;i++)cout<<frr[i]<<" ";cout<<endl;

   while(q--)
   {
       ll a;
       cin>>a;
       if(a==0)cout<<n*m<<"\n";
      else if(a<=n+m)printf("%d\n",max(0,n*m - frr[a]));
      else printf("0\n");
   }

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int q;scanf("%d",&q);while(q--)solve();
  // solve();
}

