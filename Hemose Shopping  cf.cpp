#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,x;

void solve()
{
   // cout<<"yes"<<endl;
   // int n,k;
        cin>>n>>x;
		int a[n+5],b[n+5],ans=1;
		for(int i=0;i<n;i++){
                cin>>a[i];b[i]=a[i];
        }
	    sort(b,b+n);
	    for(int i=n-x;i<x;i++){
                if(b[i]!=a[i]){
                        ans=0;
        }
        }
	    if(ans)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

