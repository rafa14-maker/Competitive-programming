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
   for(int i=0;i<n;i++)cin>>arr[i];

   int cnt = n-1;
   int pk = 0;

   while(cnt>0&&pk<n)
   {
       bool tr = false;
       int idx = -1,mn = arr[pk];
       for(int i=pk+1;i<=pk+cnt&&i<n;i++)
       {
           if(arr[i]<mn)
           {
               mn = arr[i];
               idx = i;
           }
       }
       if(idx == -1)
       {
         pk++;
         continue;
       }
       int op = idx;
       while(idx>pk)
       {
           swap(arr[idx],arr[idx-1]);
           idx--;
           cnt--;
       }
      // cnt -= idx-pk;
       pk = op;
   }

   for(int i=0;i<n;i++)cout << arr[i] << " ";
   cout << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

