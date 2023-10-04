#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  int n,k;
  cin>>n>>k;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  int odd=0,even=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]%2==0)even++;
      else odd++;
  }
 if(odd==k)
 {
     if(k%2==1)
     {
         cout<<"Yes"<<endl;
         return;
     }
     else
     {
         if(even>=1)
         {
           cout<<"Yes"<<endl;
         return;
         }
         else
         {
              cout<<"No"<<endl;
         return;
         }
     }
 }
 if(odd>k)
 {
     if(k%2==1)
     {
          cout<<"Yes"<<endl;
         return;
     }
     else
     {
         if(even>=1)
         {
           cout<<"Yes"<<endl;
         return;
         }
         else
         {
              cout<<"No"<<endl;
         return;
         }
     }
 }
if(odd<k)
{
    if(odd%2==0)odd--;
    if(odd==-1)
    {
        cout<<"No"<<endl;
        return;
    }
    if(odd+even>=k)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

}

int main()
{
    int q;cin>>q;while(q--)solve();
   //solve();
}
