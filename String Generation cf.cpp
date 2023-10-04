#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)cout<<'a';
    n-=k;
        for(int i=0;i<n;i++)
        {
          if(i%3==0)  cout<<'b';
          else if(i%3==1)cout<<'c';
          else cout<<'a';
        }
   cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
