#include<bits/stdc++.h>
using namespace std;

int q,n,m;

string arr,frr;

int good()
{
    int n=arr.size(),m=frr.size();
    for(int i=0,j=0;i<n||j<m;i++,j++)
    {
        if(i>=n||j>=m)return 0;
        if(arr[i]!=frr[j])return 0;
        int s=0,t=0;
        while(i<n-1&&arr[i]==arr[i+1])i++,s++;
        while(j<m-1&&frr[j]==frr[j+1])j++,t++;
        if(s>t)return 0;
    }
    return 1;
}

int main()
{
    cin>>q;
    while(q--)
    {
        cin>>arr>>frr;
        cout<<(good()?"YES":"NO")<<endl;
    }
}
