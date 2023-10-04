#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

   int n;
   cin>>n;

   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   vector<int>odd,even;

   for(int i=0;i<n;i++)
   {
       if(arr[i]%2==0)even.push_back(arr[i]);
       else odd.push_back(arr[i]);
   }

   for(int i=0;i<even.size();i++)
   {
       if(i+1<even.size()&&even[i]>even[i+1])
       {
           cout << "No" << endl;
           return ;
       }
   }

   for(int i=0;i<odd.size();i++)
   {
       if(i+1<odd.size()&&odd[i]>odd[i+1])
       {
           cout <<"No"<<endl;
           return ;
       }
   }

  cout << "Yes" << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

