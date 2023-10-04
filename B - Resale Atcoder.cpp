#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];

    int counter=0;

    for(int i=0;i<=pow(2,n);i++)
    {
        vector<int>v;
        vector<int>f;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(arr[j]);
                f.push_back(frr[j]);
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=(v[i]-f[i]);
        }
        counter=max(counter,sum);
      // cout<<endl;

    } cout<<counter<<endl;
}
