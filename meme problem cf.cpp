#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef long long li;
typedef double ld;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   cout << fixed << setprecision(9);
   int d;
   cin>>d;

   // i was not able to solve it
   // so i seen the tutorial
   // hudai bekkol giri koira tutorial deikha WA kaise ^____^

  if(d == 0) {
		cout << "Y " << 0.0 << " " << 0.0 << endl;
		return;
	}
	if(d < 4) {
		cout << "N" << endl;
		return;
	}

	ld D = sqrt(d * li(d - 4));
	ld a = (d + D) / 2.0;
	ld b = (d - D) / 2.0;

	cout << "Y " << a << " " << b << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

