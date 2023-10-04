#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  t,i,j;
    long arr[10005];
    cin>>t;
    for(i=0;i<t;i++)
    {

        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>j;
        for(int k=6;k<=j;k++)
        {
            arr[k]=(arr[k-1]+arr[k-2]+arr[k-3]+arr[k-4]+arr[k-5]+arr[k-6])%10000007;
        }
        printf("Case %lld: %lld\n",i+1,arr[j]%10000007);
    }

}
