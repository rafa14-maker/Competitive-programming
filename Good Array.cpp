#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    int frr[n+5];

    long long sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
        sum+=arr[i];
    }
  // cout<<sum<<endl;
    sort(frr,frr+n);

    int max1=frr[n-1];
    int max2=frr[n-2];

   // cout<<max1<<" "<<max2<<endl;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max1)
        {
            long long k=sum-max1;
            k-=arr[i];
            if(k==max1)
            {
                v.push_back(i+1);
            }
        }
        else if(arr[i]==max1)
        {
            long long k=sum-max2;
            k-=arr[i];
            if(k==max2)
            {
                v.push_back(i+1);
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
