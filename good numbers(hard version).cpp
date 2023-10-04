#include<bits/stdc++.h>
using namespace std;

vector<long long>v;
long long n;

long long ans=1e18;

void f(int pos,long long sum,long long m)
{
  //  cout<<pos<<endl;
    if(pos>=v.size())return ;
    if(sum>=m&&sum!=0)
    {
       // cout<<sum<<endl;
      ans=min(sum,ans);
    return;
    }

    f(pos+1,sum+v[pos],m);
    f(pos+1,sum,m);

}

int main()
{
    int q;
    cin>>q;
   // vector<int>v;
    long long k=1;
    while(k<1e18)
    {
        v.push_back(k);
        k*=3;
    }
    while(q--)
    {
       // cout<<v.size()<<endl;
        //int n;
        ans=1e18;
        cin>>n;

        f(0,0,n);
        cout<<ans<<endl;
    }
}
