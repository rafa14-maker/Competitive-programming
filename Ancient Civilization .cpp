#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

int Set(int n,int pos)
{
    return (n | (1<<pos));
}

void solve()
{
   // cout<<"yes"<<endl;

   int n,k;
   cin>>n>>k;

   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   int idx = 0;

   for(int j=0;j<k;j++)
   {
       int cnt = 0;
       for(int i=0;i<n;i++)if(Check(arr[i],j))cnt++;
       if(cnt>n/2)idx = Set(idx,j);
   }

   cout << idx << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

