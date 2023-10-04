#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,m;
   cin>>n>>m;
   string arr,frr;
  cin>> arr;
    for(int i = 0;i < m;i++){
        if(i >= n) frr+='z';
        else frr+=arr[i];
    }
    if(arr[n-1]!='a'){
        for(int i=0;i<n-1;i++) cout<<frr[i];
        cout<<(--frr[n-1]);
        for(int i=n;i<m;i++) cout<< frr[i];
      //  cout << endl;
    }
    else{
        for(int i = 0;i < min(n-1,m);i++){
            cout<<frr[i];
         //   cout << endl;
        }
    }
  //cout << frr<<endl;
}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
  // int q;cin>>q;while(q--)solve();
  solve();
}

