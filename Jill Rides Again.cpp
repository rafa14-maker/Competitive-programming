#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    scanf("%d",&q);
    for(int c=1;c<=q;c++)
    {
        int n,x;
        scanf("%d",&n);
        //int arr[n+5];
        int sum=0,flag=0;
        int k=-1,l=-1,a=1;

        for(int i=2;i<=n;i++)
        {
            scanf("%d",&x);
            sum+=x;
          //  cout<<sum<<endl;
            if(sum<0)
            {
                sum=0;
                a=i;
            }
            else if(sum>=flag)
            {
                if(sum>flag||(sum==flag&&(i-a>l-k)))
                {
                    flag=sum;
                    k=a;
                    l=i;
                }
                flag=sum;
            }
        }
        if(flag<=0)
        {
            printf("Route %d has no nice parts\n",c);
        }
        else
        {
             printf("The nicest part of route %d is between stops %d and %d\n",c,k,l);
        }
    }
}
