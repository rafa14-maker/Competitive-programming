#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    long long sum=0;

    long long arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=max(sum,arr[i]);
    }

    int p=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==sum)
        {
            p=i;
            break;
        }
    }

    long long r;
    cin>>r;

    long long frr[n+5];
    for(int i=0;i<n;i++)cin>>frr[i];

    if(sum>(p+1)*r+k)
    {
        cout<<-1<<endl;
        return 0;
    }

    vector<int>krr;

    for(int i=0;i<=p;i++)
    {
        krr.push_back(frr[i]);
    }

    sort(krr.begin(),krr.end());

    long long t=0,f=k;

    for(int i=0;i<krr.size();i++)
    {
        if(f<sum)
        {
           t+=krr[i];
           f+=r;
        }
        else if(f>=sum)break;
    }
    cout<<t<<endl;
}
