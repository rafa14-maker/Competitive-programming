#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    string s;
    cin>>s;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        vector<int>v;
        int j;
        for(j=i;j<n;j++)
        {
            if(s[i]==s[j])
            {
                v.push_back(arr[j]);
            }
            else break;
        }
        sort(v.begin(),v.end(),greater<int>());
        int len=v.size();
        int mp=min(len,k);
        for(int a=0;a<mp;a++)sum+=v[a];
        i=j-1;
    }
    cout<<sum<<endl;
}

int main()
{
    solve();
}
