#include<bits/stdc++.h>
using namespace std;

void solve(int n,int test)
{
    int arr[n+5];

    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            v.push_back(arr[i]+arr[j]);
        }
    }

    printf("Case %d:\n",test);

    int m;
    cin>>m;

    while(m--)
    {
        int k;
        cin>>k;
        int idx=1e7,p=0;

        for(int i=0;i<v.size();i++)
        {
            if(idx>abs(v[i]-k))
            {
                idx=abs(v[i]-k);
                p=v[i];
            }
        }

    printf("Closest sum to %d is %d.\n",k,p);

    }

}

int main()
{
    int test=0;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        solve(n,++test);
    }
}
