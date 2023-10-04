#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int mx = 1000000;
int n,m,test;
ll frr[205];
int arr[205];

struct Node
{
    int from;
    int to;
    ll w;
    Node(int a,int b,ll k)
    {
        from = a;
        to = b;
        w = k;
    }
};

vector<Node>v;


void f()
{
    frr[1] = 0;

   for(int vk=1;vk<n;vk++)
   {
       for(int i=0;i<m;i++)
       {
          int a = v[i].from;
          int  b = v[i].to;
         ll   k = v[i].w ;
           ll now = k + frr[a];
           if(frr[b]>now)
           {
               frr[b] = now;
           }
       }
   }

   while(true)
   {
       int c;
       for(c=0;c<m;c++)
       {
            int a = v[c].from;
           int b = v[c].to;
           if(frr[b] == -mx)continue;
           ll k = v[c].w ;
           ll now = k + frr[a];
            if(frr[b]>now)
           {
               frr[b] = -mx;
               break;
           }
       }
       if(c==m)break;
   }
}

void solve()
{
   // cout<<"yes"<<endl;
   v.clear();
     cin>>n;
     for(int i=1;i<=n;i++)frr[i] = mx,cin>>arr[i];

     cin>>m;
     for(int i=0;i<m;i++)
     {
         int a,b;
         cin>>a>>b;
         ll k = arr[b]-arr[a];
         ll pk = k*k*k;
         v.push_back(Node(a,b,pk));
     }

     f();

     int q;
     cin>>q;

     printf("Case %d:\n",++test);

     while(q--)
     {
         int p;
         cin>>p;
         if(frr[p]<3||frr[p]>=8001)printf("?\n");
         else printf("%lld\n",frr[p]);
     }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1

5
6 7 8 9 10
6
1 2
2 3
3 4
1 5
5 4
4 5
2
4
5

*/

