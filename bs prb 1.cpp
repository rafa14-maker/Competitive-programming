#include<bits/stdc++.h>
using namespace std;

int boss(int arr[],int l,int r,int k)
{
    if (r >= l) {
        int mid=l+(r-l)/2;

        if (arr[mid]==k){
                if(mid==0||arr[mid-1]!=k){
            return mid;
            }
            return boss(arr,l,r,k);
        }
        if (arr[mid]>k){

            return boss(arr,l,mid-1,k);
            }

        return boss(arr,mid+1,r,k);
    }

    return -1;
}

int main()
{
    int i,k,p,n;

    int a,b;

    scanf("%d %d",&a,&b);

    int  arr[a];

    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }

    while(b--)
    {
        scanf("%d",&k);

        p=boss(arr,0,a-1,k);

        printf("%d\n",p);
    }
    return 0;
}
