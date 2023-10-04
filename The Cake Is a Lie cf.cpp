#include<bits/stdc++.h>
using namespace std;

//int frr[105][105];

/*
void f(int i,int j,int sum)
{
     if(i>n||j>m)return ;
     if(i==n&&j==m)
     {
         if(sum==k)tr=true;
         return ;
     }
    f(i+1,j,sum+j);
    f(i,j+1,sum+i);
}
*/

void solve()
{
    long long n,m,k;
    cin>>n>>m>>k;
    long long a = n-1;
    long long b = m-1;
    if(a<b)swap(a,b);
    if(n>m)swap(n,m);
    long long  p = a+(b*(m));
    if(p==k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
