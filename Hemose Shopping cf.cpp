#include<bits/stdc++.h>
using namespace std;

int n,k;

void solve()
{
  //  int n,k;
    cin>>n>>k;
    int arr[n+5],frr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
    }
    sort(frr+1,frr+n+1);
    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=frr[i])
        {
            if(i<k&&n-i<k)
            {
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
