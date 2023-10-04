#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n,k;
        cin>>n>>k;
        if(n==0&&k==0)break;
        map<int,int>mp;
        int arr[k+5];
        for(int i=0;i<k;i++)cin>>arr[i],mp[arr[i]]=1;
        for(int i=0;i<k;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                int a=abs(arr[i]-arr[j]);
                mp[a]=1;
            }
        }
        bool flag=true;
        for(int i=0;i<=n;i++)
        {
            if(mp[i]!=1)flag=false;
        }
        if(flag)cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
}
