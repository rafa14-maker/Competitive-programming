#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   if(n<=2)cout << -1<<endl;
   else
   {
       for(int i=0;i<n;i++)
       {
           if(i%2==0)cout<<n/2<<" ";
           else cout <<0<<" ";
       }
       cout << endl;
   }

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}
