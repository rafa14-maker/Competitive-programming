#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[N]={0};
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[a]++;
        }
        int sum=0,flag=0;
        for(int i=1;i<=N-5;i++)
        {
            sum+=arr[i];
            if(sum>=k)
            {
                sum=0;
                for(int j=i;j>=0;j--)
                {
                    if(arr[j]!=0)
                    {
                        flag+=(i-j)*arr[j];
                        arr[j]=0;
                    }
                }
            }
        }
        cout<<flag<<endl;
    }
}
