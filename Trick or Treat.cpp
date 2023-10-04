#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    while(k--)
    {
        int a;
        cin>>a;
        while(a--)
        {
            int b;
            cin>>b;
            mp[b]++;
        }
    }
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)counter++;
    }
    cout<<counter<<endl;
}
