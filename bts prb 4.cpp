#include<bits/stdc++.h>
using namespace std;

int boss(int arr[],int l,int r,int k)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;

        if(arr[mid]==k)
        {
          return boss(arr,l,mid-1,k);
        }
        if(arr[mid]<k)
        {
         while(arr[mid]<=arr[mid+1]&&arr[mid+1]<k)
         {
             mid++;
         }
         return arr[mid];
        }
    return boss(arr,l,mid-1,k);
    }
        return -1;
}
int boss1(int arr[],int l,int r,int k)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;

        if(arr[mid]==k)
        {
          return boss1(arr,mid+1,r,k);
        }
        if(arr[mid]>k)
        {
        while(arr[mid]>=arr[mid-1]&&arr[mid-1]>k)
        {
                mid--;
            }
            return arr[mid];
        }
    return boss1(arr,mid+1,r,k);
    }
        return -1;
}
int main()
{
    int  a,b,c,d,i,k,n;

     int  arr[100000];

  while((scanf("%d",&a))==1){

    for(i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);
        c=boss(arr,0,a-1,b);
        d=boss1(arr,0,a-1,b);

        if(c==-1)
        {
            printf("X ");
        }
        else
        {
            printf("%d ",c);
        }
        if(d==-1)
        {
            printf("X \n");
        }
        else
        {
            printf("%d\n",d);
        }
    }
}
}
