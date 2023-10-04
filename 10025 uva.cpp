#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

void solve()
{
   // cout<<"yes"<<endl;
   if(test>0)cout<<endl;

   int n;
   cin>>n;
    if(n<0) n *= (-1);

    for(int i=1;i<=50000;i++)
    {
        int s = i*(i+1);
        s/=2;

        if(s<n)continue;

        int a = s+n;
        if(a%2!=0)continue;
        a/=2;
        int b = s - a;
        if(abs(a-b)==n)
        {
            cout<<i<<endl;
            break;
        }
    }

   test++;
}

int main()
{
    CherryFrog;
  int q;cin>>q;while(q--)solve();
 //  solve();
}

