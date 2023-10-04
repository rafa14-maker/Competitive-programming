#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,p=0,arr[p],counter=0,m,a,i;

    scanf("%d",&a);

    n=a;

    while(n--)
    {
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            scanf("%d",&arr[p]);
            p++;
        }
    }



    for(i=0;i<p;i++)
    {
        cout<<arr[i]<<endl;
    }

    k=0;
    counter=0;

   /* for(i=0;i<p;i++)
    {
        if(arr[i]!=k)
        {
            counter=1;
            k=arr[i];
        }
        else if(arr[i]==k)
        {
            counter++;
            if(counter==a)
            {
                printf("%d",arr[i]);
            }
        }
    }*/

}
