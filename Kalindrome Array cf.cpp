#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int N = 3e5+5;
int n;
int arr[N];


void solve()
{

    // i couldnt solve it

    // so i saw everyones solution

    // this solution is Digonto

  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];

  int a= -1, b= -1;

  int l=0,r=n-1;

  while(l<=r)
  {
      if(arr[l]!=arr[r])
      {
          a=arr[l];
          b=arr[r];
          break;
      }
      l++;
      r--;
  }

  if(a==-1)
  {
      cout<<"YES"<<endl;
      return ;
  }

  vector<int>vk,vs;

  for(int i=0;i<n;i++)
  {
      if(arr[i]!=a)
      {
          vk.push_back(arr[i]);
          vs.push_back(arr[i]);
      }
  }

  reverse(vs.begin(),vs.end());

  if(vk == vs)
  {
       cout<<"YES"<<endl;
      return ;
  }

  vk.clear();
  vs.clear();

   for(int i=0;i<n;i++)
  {
      if(arr[i]!=b)
      {
          vk.push_back(arr[i]);
          vs.push_back(arr[i]);
      }
  }

  reverse(vs.begin(),vs.end());

  if(vk == vs)
  {
       cout<<"YES"<<endl;
      return ;
  }


  cout<<"NO"<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

