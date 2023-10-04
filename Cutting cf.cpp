#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int>v;
    int idx=0;

    int odd=0,even=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)odd++;
        else even++;
        if(odd==even&&i!=n-1)
        {
            int a = 0,b=0;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]%2==0)a++;
                else b++;
            }
            if(a==b)
            {
                v.push_back(abs(arr[i]-arr[i+1]));
            }
        }
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=m)idx++,m-=v[i];
    }

    cout<<idx<<endl;


}

int main()
{
    solve();
}
