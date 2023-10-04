#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   int n;
	cin>>n;
	string S;
	cin>>S;
	int c=0,ind=0;
	while(ind+1<n){
		if(S[ind]==')'&&'('==S[ind+1]){
			int tmp=ind+1;
			while(tmp<n&&S[tmp]=='(') tmp++;
			if(tmp==n) break;
			c++;
			ind=tmp+1;
		}else{
			ind+=2;
			c++;
		}
	}
	cout<<c<<" "<<n-ind<<"\n";
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

