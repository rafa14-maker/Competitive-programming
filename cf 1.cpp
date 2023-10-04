#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=n*2;
    int arr[p+2],frr[p+2];

    for(int i=1;i<=p;i++)
    {
        cin>>arr[i];
    }
    int k=1,sum=0,l=0;

    while(k<=n)
    {
        for(int i=1;i<=p;i++)
        {
            if(arr[i]==k&&arr[i]!=0)
            {
                sum+=abs(i-l);
                l=i;
                arr[i]=0;
                k++;
                break;
            }
        }
    }
    k=1;l=0;
    while(k<=n)
    {
        for(int i=1;i<=p;i++)
        {
            if(arr[i]==k&&arr[i]!=0)
            {
                sum+=abs(i-l);
                l=i;
                arr[i]=0;
                k++;
                break;
            }
        }
    }

    cout<<sum-2<<endl;
}
