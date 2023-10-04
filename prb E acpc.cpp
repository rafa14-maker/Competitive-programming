#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==0&&b==0)
    {
        cout<<"Not a moose"<<endl;
        return;
    }
    if(a!=b)cout<<"Odd"<<" ";
    else cout<<"Even"<<" ";
  //  if((a+b)%2==1)a++;
    cout<<max(a,b)*2<<endl;
}

int main()
{
    solve();
}
