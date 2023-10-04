#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
const int N = 1e5+5;

void solve()
{
    string arr;
    cin>>arr;
   vector<int>adj[N];

   for(int i=0;i<arr.size();i++)
   {
       if(arr[i]=='c')
       {
           v[0].push_back(i);
       }
       if(arr[i]=='h')
       {
              v[1].push_back(i);
       }
       if(arr[i]=='o')
       {
               v[2].push_back(i);
       }
       if(arr[i]=='k')
       {
               v[3].push_back(i);
       }
       if(arr[i]=='u')
       {
               v[4].push_back(i);
       }
       if(arr[i]=='d')
       {
               v[5].push_back(i);
       }
       if(arr[i]=='a')
       {
               v[6].push_back(i);
       }
       if(arr[i]=='i')
       {
               v[7].push_back(i);
       }
   }



}

int main()
{
    solve();
}
