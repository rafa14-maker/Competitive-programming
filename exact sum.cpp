#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum,flag,i,j,a,k,l;


   while((scanf("%d",&a))==1)
    {
        int arr[a];
        bool prime[a];
        for(i=0;i<a;i++)
        {
         scanf("%d",&arr[i]);
         prime[i]=true;
        }
        scanf("%d",&sum);
        sort(arr,arr+a);

         flag=arr[a-1];

        for(i=0;i<a-1;i++)
        {

            if(prime[i]==true)
            {
                for(j=i+1;j<a;j++)
                {
                    if(prime[j]==true&&arr[i]+arr[j]==sum)
                    {
                        if((arr[j]-arr[i])<=flag)
                        {
                            flag=arr[j]-arr[i];
                            k=arr[j];
                            l=arr[i];
                            break;
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",l,k);
    }

}
