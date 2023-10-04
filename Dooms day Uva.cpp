#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

/*

int arr[500][505];
int frr[500][505];
int krr[500][505];

int n,m;

void trans()
{
    int ak=0,bk=0;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            krr[i][j]=arr[ak][bk];
           bk++;
           if(bk==m)
           {
               bk=0;
               ak++;
           }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=krr[i][j];
        }
    }

}

void pri()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<krr[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool check()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(frr[i][j]!=krr[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

void solve()
{
   int ak,bk;
   cin>>ak>>bk;

    n = pow(3,ak);
    m = pow(3,bk);

  // int arr[n+5][m+5];
  // int frr[n+5][m+5];

   int cnt=0;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           arr[i][j] = ++cnt;
           frr[i][j] = arr[i][j];
       }
   }

   cnt=0;

   while(1)
   {
       trans();
       cnt++;
     //  pri();
      if(cnt==100)break;
       if(check())break;
   }

   cout<<cnt<<endl;

}

*/

int test;

void solve()
{
    long long a,b;
   cin>>a>>b;

   long long k = gcd(a,b);
   a/=k;
   b/=k;

   printf("Case %d: %lld\n",++test,a+b);

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
