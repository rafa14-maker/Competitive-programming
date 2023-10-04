#include<bits/stdc++.h>
using namespace std;

int n;
int sum;



void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   arr[1]=4;
   arr[2]=4;
   for(int i=4;i<=n;i+=2)
   {
       arr[i]=(arr[i-2]+i+1);
   }
   for(int i=3;i<=n;i+=2)
   {
       arr[i]=(arr[i-2]+((i+1)*2));
   }
   cout<<arr[n]<<endl;
}

int main()
{
   // int q;cin>>q;while(q--)solve();
    solve();
}

