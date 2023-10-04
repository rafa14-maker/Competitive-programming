#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,a,b,j,p;
     int arr[100006]={};
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {

        scanf("%d",&b);
        for(j=1;j<=b;j++)
        {
            scanf("%d",&arr[j]);
        }
        k=0;
        for(j=1;j<=b;j++)
        {

           if(arr[j]-arr[j-1]>k)
           {
               k=arr[j]-arr[j-1];
           }
        }
       int ans=k;

     for(j=1; j<=b; j++) {
            if(arr[j]-arr[j-1]== k)
                k--;
            else if(arr[j]-arr[j-1] > k) {
                ans++;
                break;
            }
        }

        printf("Case %d: %d\n",i,ans);
    }
}
