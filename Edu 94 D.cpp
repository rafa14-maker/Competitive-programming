#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                v.push_back(make_pair(i,j));
            }
        }
    }

}

int main()
{
    int q;cin>>q;while(q--)solve();
  //solve();
}
