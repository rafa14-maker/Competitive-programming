#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

string frr;
int pi[N];

void cal()
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
   cal();
   int n=frr.size();
   int p = n - pi[n-1];
   int q = n/p;

  if(p==1)cout<<1<<endl;
  else cout<<q<<endl;
}

int main()
{
    while(1)
    {
        cin>>frr;
        if(frr==".")break;
        else solve();
    }
}

/*

ababab
abcabcabc
abacabac
aaaaaa
abababf
.

*/
