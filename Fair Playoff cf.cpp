#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"hello"<<endl;
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int arr[4];
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
   arr[3]=d;
   sort(arr,arr+4);
   if(arr[2]==a&&arr[3]==b||arr[2]==b&&arr[3]==a)cout<<"NO"<<endl;
   else if(arr[2]==c&&arr[3]==d||arr[2]==d&&arr[3]==c)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

