#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>n>>p>>q;
        int arr[n];
        int sum=0,k=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            sum+=arr[j];
            if(sum<=q&&k<p)
            {
                k++;
            }
        }

        printf("Case %d: %d\n",i,k);
    }

}
