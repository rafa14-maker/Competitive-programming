#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int arr[200];
int n;

void solve()
{
   // cout<<"yes"<<endl;
   vector<int>v;

  // int n;
   cin>>n;

   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   int ans = max(0,n-2);

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<i;j++)
       {
          int save = 0 ;
          for(int k=0;k<n;k++)
          {
              if(((arr[j]-arr[i])*(k-i)) == (arr[k]-arr[i])*(j-i))save++;
          }
          ans = min(ans,n-save);
       }
   }

   cout<< ans<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
int q;cin>>q;while(q--)solve();
 //  solve();
}

