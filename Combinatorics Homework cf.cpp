#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int arr[3],n;
   cin>>arr[0]>>arr[1]>>arr[2]>>n;
   sort(arr,arr+3);

   if(n<=(arr[0]+arr[1]+arr[2]-3)&&n>=(arr[2]-arr[1]-arr[0]-1))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
