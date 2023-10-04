#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        long long arr[n+5];
        long long sum=0;
        for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
        sum/=n;
        long long mov=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>sum)mov+=arr[i]-sum;
        }
        counter++;
        printf("Set #%d\n",counter);
        printf("The minimum number of moves is %d.\n",mov);
        printf("\n");
    }
    return 0;
}
