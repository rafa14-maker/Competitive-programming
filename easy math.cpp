#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long long k=arr[i]*arr[j];
                long long flag=0;
                while(k>0)
                {
                    flag+=(k%10);
                    k/=10;
                }
                sum=max(sum,flag);
            }
        }
        cout<<sum<<endl;
    }
}
