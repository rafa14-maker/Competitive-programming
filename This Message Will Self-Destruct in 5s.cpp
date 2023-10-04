#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        int h;
        cin>>h;
       arr[i]=i-h;
       mp[i+h]++;
    }
    long long counter=0;
    for(int i=1;i<=n;i++)
    {
        counter+=mp[arr[i]];
    }
    cout<<counter<<endl;
}
