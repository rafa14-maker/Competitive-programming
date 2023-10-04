#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       int sum = n, k = 0;
      // n = n + (n%3);
     //  n++;
       while(n>2)
       {
           sum += n/3;
           n = n/3 + n%3;
       }
       if(n==2)sum++;
       cout<< sum<<endl;
       //cout<<n<<" "<<k<<endl;
   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}
