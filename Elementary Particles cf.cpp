#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int frr[155555];

void solve()
{
   // cout<<"yes"<<endl;

    int ans = -1;
    memset(frr,0,sizeof frr);

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;

        if(frr[a])
        {
            ans = max(ans,frr[a]+(n-i));
        }
        frr[a] = i;
    }

    cout<<ans<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

