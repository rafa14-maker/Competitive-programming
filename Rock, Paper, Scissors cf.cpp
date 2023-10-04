#include<bits/stdc++.h>
using namespace std;

int n;

void win(int a1,int a2,int a3,int b1,int b2,int b3)
{
    int sum=0,rsum=0,ssum=0,psum=0;
    rsum+=min(a1,b2);
    ssum+=min(a2,b3);
    psum+=min(a3,b1);
    sum= rsum+ssum+psum;
    cout<<sum<<" ";
}

void lose(int a1,int a2,int a3,int b1,int b2,int b3)
{
    int sum=0,rsum=0,ssum=0,psum=0;

     rsum=min(b1,a1);
    a1-=rsum;
    b1-=rsum;
    ssum=min(a2,b2);
    a2-=ssum;
    b2-=ssum;
    psum=min(b3,a3);
    b3-=psum;
    a3-=psum;
    //sum+=rsum+psum+ssum;

     rsum=min(a2,b1);
    a2-=rsum;
    b1-=rsum;
    ssum=min(a3,b2);
    a3-=ssum;
    b2-=ssum;
    psum=min(b3,a1);
    b3-=psum;
    a1-=psum;
   // sum+=rsum+psum+ssum

  //  cout<<n-sum<<endl;

    win(a1,a2,a3,b1,b2,b3);

}


void solve()
{
  //  int n;
    cin>>n;
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
  lose(a1,a2,a3,b1,b2,b3);
  win(a1,a2,a3,b1,b2,b3);
  cout<<endl;
}

int main()
{
    solve();
}
