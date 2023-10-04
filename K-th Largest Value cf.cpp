#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    int one=0,zero=0;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)one++;
        else zero++;
    }
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        if(a==2)
        {
            if(b<=one)cout<<1<<endl;
            else cout<<0<<endl;
        }
        else
        {
            if(arr[b-1]==1)one--,zero++,arr[b-1]=0;
            else arr[b-1]=1,zero--,one++;
        }
    }
}

int main()
{
  //  int q;cin>>q;while(q--)solve();
   solve();
}

