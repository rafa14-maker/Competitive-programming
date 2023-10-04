#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test=0;
    while(1)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==0&&m==0)break;
        int arr[n+5];
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        sort(arr,arr+n);
        printf("CASE# %d:\n",++test);
        while(m--)
        {
            int a;
            scanf("%d",&a);
            int l=0,r=n-1;
            int p=-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(arr[mid]>=a)
                {
                    if(arr[mid]==a)p=mid;
                   r=mid-1;
                }
                else l=mid+1;
            }
            if(p==-1)printf("%d not found\n",a);
            else printf("%d found at %d\n",a,p+1);
        }
    }
}
