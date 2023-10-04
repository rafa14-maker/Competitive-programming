#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int e=1;e<=q;e++)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=1;i<=n;i++)arr[i]=i;
        int frr[n+5]={0};
        int counter=0;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[j]%i==0)
                {
                    while(arr[j]%i==0)
                    {
                        frr[i]++;
                        arr[j]/=i;
                    }
                }
            }
        }
        printf("Case %d: %d =",e,n);
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(frr[i]>0&&flag==0)
            {
                flag++;
                printf(" %d (%d)",i,frr[i]);
            }
            else if(frr[i]>0)
            {
                 printf(" * %d (%d)",i,frr[i]);
            }
        }
        printf("\n");
    }
}
