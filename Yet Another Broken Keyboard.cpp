#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<char,int>mp;
    string s;
    cin>>s;
    for(int i=0;i<m;i++)
    {
        char a;
        cin>>a;
        mp[a]++;
    }
    int arr[n+5]={0};
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[i]]>0)
        {
            arr[i]=1;
        }
    }
    long long sum=0;
    long long counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)counter++;
        if(arr[i]==0)
        {
            sum+=((counter*(counter+1))/2);
            counter=0;
        }
    }
    if(counter>0)
    {
        sum+=((counter*(counter+1))/2);
    }
    cout<<sum<<endl;
}
