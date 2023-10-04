#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=0;j<i;j++)
        {
            if(arr[j]<=arr[i])sum++;
        }
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
