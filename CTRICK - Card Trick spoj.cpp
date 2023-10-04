#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   deque<int>dq;
   for(int i=1;i<=n;i++)
   {
       arr[i] = 0;
       dq.push_back(i);
   }

   for(int i=1;i<=n;i++)
   {
       int k = i;
       while(k--)
       {
           int f = dq.front();
           dq.pop_front();
           dq.push_back(f);
       }
           int f = dq.front();
           dq.pop_front();
           arr[f] = i;
   }

   for(int i=1;i<=n;i++)cout << arr[i] << " ";cout<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
   // solve();
}

