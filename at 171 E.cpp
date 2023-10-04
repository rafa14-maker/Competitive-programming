#include<bits/stdc++.h>
using namespace std;

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}


int frr[30];

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=30;j++)
        {
            if(Check(arr[i],j))frr[j]++;
        }
    }

    vector<long long>v;

    for(int i=0;i<n;i++)
    {
        long long k=0;
        for(int j=0;j<=30;j++)
        {
            if(Check(arr[i],j))
            {
                int a=frr[j]-1;
                if(a%2==1)k=Set(k,j);
            }
            else
            {
                int a=frr[j];
                if(a%2==1)k=Set(k,j);
            }
        }
        v.push_back(k);
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
}
