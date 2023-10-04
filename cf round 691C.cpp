#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n;
  //  memset(vis,false,sizeof vis);
    cin>>n;

    if(n==1)cout<<4<<endl;
    else if(n==2)cout<<4<<endl;
    else if(n==3)cout<<12<<endl;
    else
    {

    long long sum=0;
    for(int i=1;i<=n-3;i++)
    {
        if(i%2==0)sum++;
        else sum+=2;
    }
      cout<<sum*4+12<<endl;
    }
}
int main()
{
    solve();
}
