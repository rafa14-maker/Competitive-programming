#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    int sum=0;
    for(int i=0;i<pow(2,n);i++)
    {
        long long flag=0;
        vector<long long>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(arr[j]);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            flag|=v[i];
        }
   // cout<<endl;
   sum+=flag;

    }
    cout<<sum<<endl;
}

