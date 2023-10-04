#include<bits/stdc++.h>
using namespace std;

int k,m,n;
int arr[30],frr[30],pass[30];
int train[30];
int mx;

void f(int pos,int sum)
{
   //cout<<sum<<endl;
    if(pos==n)
    {
        mx=max(sum,mx);
        return;
    }

    f(pos+1,sum);

    for(int i=arr[pos];i<frr[pos];i++)
    {
        if(train[i]+pass[pos]>k)
        {
            for(int j=arr[pos];j<i;j++)train[j]-=pass[pos];
            return;
        }
        train[i]+=pass[pos];
    }

    f(pos+1,sum+(pass[pos]*(frr[pos]-arr[pos])));

    for(int i=arr[pos];i<frr[pos];i++)
    {
        train[i]-=pass[pos];
    }

}

void solve()
{
   for(int i=0;i<30;i++)arr[i]=0,frr[i]=0,pass[i]=0,train[i]=0;
   for(int i=0;i<n;i++)scanf("%d %d %d",&arr[i],&frr[i],&pass[i]);
   mx=0;
   f(0,0);
   printf("%d\n",mx);
}

int main()
{
    while(1)
    {
        scanf("%d %d %d",&k,&m,&n);
        if(n==0&&m==0&&k==0)break;
        solve();
    }
}
