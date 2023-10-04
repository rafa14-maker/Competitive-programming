#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
		string s;
		cin >> n >> m;
		cin >> s;
		vector<int> sul(1, 0), sur(1, 0);
		for (int i = n - 1; i >= 0; --i){
			int d = s[i] == '+' ? 1 : -1;
			sul.push_back(min(0, sul.back() + d));
			sur.push_back(max(0, sur.back() + d));
		}
		reverse(sul.begin(), sul.end());
		reverse(sur.begin(), sur.end());
		vector<int> prl(1, 0), prr(1, 0), pr(1, 0);
		for(int i=0;i<n;i++){
			int d = s[i] == '+' ? 1 : -1;
			pr.push_back(pr.back() + d);
			prl.push_back(min(prl.back(), pr.back()));
			prr.push_back(max(prr.back(), pr.back()));
		}
		for(int i=0;i<m;i++){
			int l, r;
			cin >> l >> r;
			--l;
			int l1 = prl[l], r1 = prr[l];
			int l2 = sul[r] + pr[l], r2 = sur[r] + pr[l];
			printf("%d\n", max(r1, r2) - min(l1, l2) + 1);
		}

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
