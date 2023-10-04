#include<bits/stdc++.h>
using namespace std;

int n,m;
char frr[150][150];

void cl()
{
    for(int i=0;i<150;i++)for(int j=0;j<150;j++)frr[i][j]=' ';
}

bool same(int a,int b,int c,int d)
{
    char ch=frr[a][c];
    for(int i=a;i<=b;i++)
    {
        for(int j=c;j<=d;j++)
        {
            if(frr[i][j]!=ch)return false;
        }
    }
    return true;
}

int f(int a,int b)
{
    int sum=1;

    for(int i=a,p=a,j=b,k=b;i>=0,p<n,j>=0,k<m;i--,p++,j--,k++)
    {
        if(same(i,p,j,k))sum=max(sum,p-i+1);
    }
    return sum;
}

void solve()
{
    cl();
    int q;
    cin>>n>>m>>q;
   // getchar();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>frr[i][j];
    }
   cout<<n<<" "<<m<<" "<<q<<endl;
   while(q--)
   {
       int i,j;
       cin>>i>>j;
       cout<<f(i,j)<<endl;
   }

}

int main()
{
    int q;
     cin>>q;
     while(q--)solve();
}

/*
2 17 1
JJJJJJJJJJUUUBvsM
JJJJJJJJJJCCCggmx
1 3
*/
