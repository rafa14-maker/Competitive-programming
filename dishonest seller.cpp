#include<bits/stdc++.h>
using namespace std;

const int N=2e5+7;
int arr[N],frr[N];
pair<int,int>p[N];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];
    for(int i=0;i<n;i++)
    {
        p[i]={arr[i]-frr[i],i};

        }

                sort(p,p+n);

    int sum=0;

    for(int i=0;i<n;i++)
    {
        if(i<k||p[i].first<0)
        {
            sum+=arr[p[i].second];
        }
        else
        {
            sum+=frr[p[i].second];
        }
    }

    cout<<sum<<endl;
}
