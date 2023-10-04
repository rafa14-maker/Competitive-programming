#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
int arr[N],frr[N],pos[N];
int mp[N];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
      pos[arr[i]]=i;
    }

    for(int j=1;j<=n;j++)cin>>frr[j];

    for(int j=1;j<=n;j++)
    {
        int cur=pos[frr[j]]-j;
        if(cur<0)cur+=n;
        mp[cur]++;
    }

    int counter=0;

    for(int i=0;i<=N;i++)counter=max(counter,mp[i]);

    cout<<counter<<endl;

}
