#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=1;
    while(1)
    {
        int n;
        cin>>n;
        if(n<0)break;
        int arr[100],frr[100];
        int sum=n;
        for(int i=0;i<12;i++)cin>>arr[i];
        for(int i=0;i<12;i++)cin>>frr[i];
        printf("Case %d:\n",c);
        c++;
        for(int i=0;i<12;i++)
        {
            if(sum>=frr[i])
            {
                printf("No problem! :D\n");
                sum-=frr[i];
            }
            else
            {
               printf("No problem. :(\n");
            }
            sum+=arr[i];
        }
    }
}
