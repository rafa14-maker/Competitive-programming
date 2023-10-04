#include<bits/stdc++.h>
using namespace std;

int ko(int n)
{
    int sum=0;

     while(n>0)
    {
        n/=5;
        sum+=n;
    }

    return sum;
}

int zf(int n,int l,int r)
{
    if(r>=l)
    {
      int mid=l+(r-l)/2;
      int k=ko(mid);
      if(k==n)
      {
        while(ko(mid)==n){
			mid--;
		}
          return ++mid;

      }
      if(k<n)
      {
         return zf(n,mid+1,r);
      }
      if(k>n)
      {
          return zf(n,l,mid-1);
      }
    }
    return -1;
}

int main()
{
    int a,b,i,k;

    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        scanf("%d",&k);
      b=zf(k,0,INT_MAX);
       if(b==-1)
       {
           printf("Case %d: impossible\n",i);
       }
       else
       {
           printf("Case %d: %d\n",i,b);
       }
    }
}
