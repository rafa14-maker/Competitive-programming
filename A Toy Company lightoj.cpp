#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

int frr[30][30][30];

struct idx
{
    int i;
    int j;
    int k;
};

void cal()
{
    for(int i=0;i<30;i++)
    {
        for(int j=0;j<30;j++)
        {
            for(int k = 0;k<30;k++)frr[i][j][k] = 50;
        }
    }
}


void solve()
{
    cal();
   // cout<<"yes"<<endl;
   string s,t;
   cin>>s>>t;

   queue<pair<int,idx> >pq;

   int a = (int)s[0]-'a';
   int b = (int)s[1]-'b';
   int c = (int)s[2]-'c';

   idx x ;
   x.i = a;
   x.j = b;
   x.k = c;

   pq.push(make_pair(0,x));

   int m;
   cin>>m;

   for(int i=0;i<m;i++)
   {
       char ae,be,ce;
       cin>>ae>>be>>ce;
         a = (int)ae-'a';
        b = (int)be-'a';
           c = (int)ce-'a';
           frr[a][b][c] = -1;
   }

   while(!pq.empty())
   {
       pair<int,idx> f = pq.front();
       pq.pop();
       idx x = f.second;
       int d = f.first;
       a = x.i;
       b =x.j;
       c = x.k;
       if(a<0)a=25;
       if(b<0)b=25;
       if(c<0)c=25;
       if(a>25)a=0;
       if(b>25)b=0;
       if(c>25)c=0;
       if(frr[a][b][c]== -1)continue;
       if(frr[a][b][c]>d)
       {
           frr[a][b][c] = d;
           x.i = a-1;
           x.j = b;
           x.k = c;
           pq.push(make_pair(d+1,x));
            x.i = a;
           x.j = b-1;
           x.k = c;
           pq.push(make_pair(d+1,x));
            x.i = a;
           x.j = b;
           x.k = c-1;
           pq.push(make_pair(d+1,x));
            x.i = a-1;
           x.j = b-1;
           x.k = c;
           pq.push(make_pair(d+1,x));
             x.i = a-1;
           x.j = b;
           x.k = c-1;
           pq.push(make_pair(d+1,x));
              x.i = a;
           x.j = b-1;
           x.k = c-1;
            pq.push(make_pair(d+1,x));
              x.i = a-1;
           x.j = b-1;
           x.k = c-1;
           pq.push(make_pair(d+1,x));
           x.i = a+1;
           x.j = b;
           x.k = c;
           pq.push(make_pair(d+1,x));
            x.i = a;
           x.j = b+1;
           x.k = c;
           pq.push(make_pair(d+1,x));
            x.i = a;
           x.j = b;
           x.k = c+1;
           pq.push(make_pair(d+1,x));
            x.i = a+1;
           x.j = b+1;
           x.k = c;
           pq.push(make_pair(d+1,x));
             x.i = a+1;
           x.j = b;
           x.k = c+1;
           pq.push(make_pair(d+1,x));
              x.i = a;
           x.j = b+1;
           x.k = c+1;
           pq.push(make_pair(d+1,x));
              x.i = a+1;
           x.j = b+1;
           x.k = c+1;
           pq.push(make_pair(d+1,x));
       }
   }

   a = (int)t[0]-'a';
   b = (int)t[1]-'b';
   c = (int)t[2]-'c';

   if(frr[a][b][c] < 50)printf("Case %d: %d\n",++test,frr[a][b][c]);
   else printf("Case %d: -1\n",++test);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

