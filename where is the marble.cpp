#include<bits/stdc++.h>
using namespace std;

int n,k,t=0,l,mid,arr[500050],p,r;

int binarysearch()
{
    l=0;
    r=n;
    while(l<r)
    {
        mid=(l+r)/2;
        if(arr[mid]==p)return mid;
       else if(arr[mid]<p)l=mid+1;
        else r=mid-1;
    }
}

int main()
{
          ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1==1)
    {
        scanf("%d%d",&n,&k);
        if(n==0&&k==0)break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        printf("CASE# %d:\n",++t);
        while(k--)
        {
            scanf("%d",&p);
            if(arr[binarysearch()]==p){
            printf("%d found at %d\n",p,binarysearch()+1);}
            else
            {
               printf("%d not found\n",p);
            }
        }
    }
}
