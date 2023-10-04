#include<bits/stdc++.h>
using namespace std;

long long arr[400000],n,c=0;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);

    for(int i=1;i<=n;i++)
    {
        c+=abs(i-arr[i]);
    }
    cout<<c<<endl;
}
