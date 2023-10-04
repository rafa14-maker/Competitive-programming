#include<bits/stdc++.h>
using namespace std;
int k;
string arr,frr;


void solve()
{
  cin>>k;
  cin>>arr>>frr;
 int sam=0,baki=0;
 for(int i=0;i<arr.size();i++)
 {
     if(arr[i]==frr[i])sam++;
     else baki++;
 }
 if(sam>=k)
 {
     cout<<k+baki<<endl;
 }
 else
 {
   cout<<arr.size()-k<<endl;
 }
}

int main()
{
    //int q;cin>>q;while(q--)solve();
    solve();
}
