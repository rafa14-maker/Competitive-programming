#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
   int n;
   cin>>n;
    string arr;
    for(int i=0;i<n;i++)arr+='9';
    int m=n/4;
    for(int i=0;i<m;i++)arr[i]='0';
    if(n%4>0)arr[m]='8';
    reverse(arr.begin(),arr.end());
    cout<<arr<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}

