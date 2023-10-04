#include<bits/stdc++.h>
using namespace std;
#define max 50000

int boss1(int arr[],int l,int r,int k)
{
    if (r >= l&&l>=0) {
         int mid=l+(r-l)/2;

         if(arr[mid]<k)
         {
             if(arr[mid+1]<=k)
             {
                 return boss1(arr,l,mid+1,k);
             }
             return mid;
         }
         if(arr[mid]>k)
         {
             return boss1(arr,l,mid-1,k);
         }
         return boss1(arr,l,mid-1,k);
    }

    return -1;
}

int boss2(int arr[],int l,int r,int k)
{

    if (r >= l) {
         int mid=l+(r-l)/2;

            }


    return -1;
}

int main()
{
    int a,b,i,l;

    long long j,f,s,r;

    int arr[max];

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        scanf("%lli",&arr[i]);
    }

    scanf("%d",&b);

    while(b--)
    {
        scanf("%lli",&j);

        s=boss1(arr,0,a,j);
      //  r=boss2(arr,0,a,j);

        if(s==-1)
        {
            printf("X ");
        }
        else
        {
            printf("%lli ",s);
        }
     /*   if(r==-1)
        {
            printf("X \n");
        }
        else
        {
            printf("%lli \n",r);
        }*/

    }

}
