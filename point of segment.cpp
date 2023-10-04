#include<bits/stdc++.h>
using namespace std;

  int arr[100005];

  int n;

int koss(int l,int r,int k)
{
    if(r>=l)
    {
        int mid=(r+l)/2;

        if((mid+1==n||arr[mid+1]>k)&&(mid==0||arr[mid-1]<k)) {
		if(arr[mid]<k) {
			mid++;
		}
		return mid;
	}

        if(arr[mid]<k)
        {
               return koss(mid+1,r,k);
        }
         return koss(l,mid-1,k);
	}

return -1;

    }





int boss(int l,int r,int k)
{
    if(r>=l)
    {
        int mid=(r+l)/2;

        if((mid+1==n||arr[mid+1]>k)&&(mid==0||arr[mid-1]<k)){

		if(arr[mid]>k) {
			mid--;
		}
		return mid;
	}

        if(arr[mid]>k)
        {
        return boss(l,mid-1,k);
        }
         return boss(mid+1,r,k);
    }

        return -1;
}

int main()
{
    int i,k,a,b,c,d,p,l,j;

    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d %d",&n,&b);

        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        printf("Case %d:\n",i);

        while(b--)
        {
            scanf("%d %d",&k,&l);
            c=koss(0,n-1,k);
            d=boss(0,n-1,l);

           printf("%d\n",d-c+1);
        }
    }
}
