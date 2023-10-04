#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int cal(int n)
{
    int cnt = 0;
    while(n>0)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}

int chr(int a,int b)
{
    int cnt = 0;
    while(a>0)
    {
        int r = a%10;
        int k = b%10;
        if(r!=k)cnt++;
        a/=10;
        b/=10;
    }
    return cnt;
}

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   int f = n;
   int len = cal(n);

   int idx = 1e8+5,pk = 0;

   for(int i=0;i<1000;i++)
   {
       if(i%7==0&&len == cal(i))
       {
           if(chr(n,i)<idx)
           {
               idx = chr(n,i);
               pk=i;
           }
       }
   }

   cout<<pk<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

