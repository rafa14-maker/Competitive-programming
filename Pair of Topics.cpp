#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    long long arr[n+5],frr[n+5];
    for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
    for(int i=0;i<n;i++) scanf("%lld",&frr[i]);;
    long long counter=0;


    vector<long long>v;

    for(int i=0;i<n;i++)
    {
        v.push_back(arr[i]-frr[i]);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size()-1;i++)
    {
        int a=v[i];
        int l=i,r=v.size()-1,p=1e9;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a+v[mid]>=1)
            {
                p=mid;
               // if(p==i)p--;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(p!=1e9)
        {
          //  cout<<n-p<<endl;
            counter+=(n-p);
            if(p==i)counter--;
        }

    }
    cout<<counter<<endl;
}
