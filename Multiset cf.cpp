#include<bits/stdc++.h>
using namespace std;

const int  N = 1e6+5;
int n,k;

int arr[N],frr[N];

int fun(int v)
{
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<=v)cnt++;
    }
    for(int i=0;i<k;i++)
    {
        if(frr[i]>0&&frr[i]<=v)cnt++;
        if(frr[i]<0&&abs(frr[i])<=cnt)cnt--;
    }
    return cnt;
}

void solve()
{
   scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int j=0;j<k;j++)
    {
       scanf("%d",&frr[j]);
    }

    if(fun(1e9)==0)
    {
       printf("0\n");
        return ;
    }
    int l=0,r=1e6+5;

    while(r-l>1)
    {
        int mid=(l+r)/2;
        if(fun(mid)>0)
        {
            r=mid;
        }
        else l=mid;
    }

   printf("%d\n",r);

}

int main()
{
    solve();
}
