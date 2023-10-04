#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+7;

string arr;
int pi[N],test=0;

void cal(string frr)
{
     int k=0;
    pi[0] = 0;
    int m=frr.size();


     for(int i = 1; i < m; i++) {
        while(k>0 && frr[k] != frr[i]) k = pi[k-1];
        if(frr[k] == frr[i]) k++;
        pi[i] = k;
    }
}



void solve()
{
    cin>>arr;
   string txt = arr;
   reverse(txt.begin(),txt.end());
   string str = txt+"$"+arr;
   cal(str);
   int n = str.size();
   int q = pi[n-1];

   string krr= arr+txt.substr(q);
 //  cout<<krr<<endl;

   printf("Case %d: %d\n",++test,krr.size());

}

int main() {
	int q;
	cin>>q;
	while(q--)solve();
}

/*

kkabcefcabccba

*/
