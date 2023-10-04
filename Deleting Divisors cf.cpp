#include<bits/stdc++.h>
using namespace std;


void solve()
{
    //cout<<"404"<<endl;

    long long n;
    cin>>n;

     if(n%2==1)
     {
         cout<<"Bob"<<endl;
         return ;
     }

     int cnt=0;

     while(n%2==0&&n>0)
     {
         n/=2;
         cnt++;
     }

     if(n==1&&cnt%2==1)cout<<"Bob"<<endl;
     else cout<<"Alice"<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

