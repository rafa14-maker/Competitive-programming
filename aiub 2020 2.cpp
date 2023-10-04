#include<bits/stdc++.h>
using namespace std;

void solve()
{
   freopen("auxiliary.in","r",stdin);
 freopen("auxiliary.out","w",stdout);
  int n;
  cin>>n;
  long long sum=0;
   if(n==2)sum+=1; if(n==3)sum+=7; if(n==4)sum+=4; if(n==5)sum+=8;
    if(n==6)sum+=14; if(n==7)sum+=11; if(n==8)sum+=15; if(n==9)sum+=21;
    else
    {
        sum=7*(n/3);
        n=n%3;
        if(n==2)sum+=1;
        else if(n==1)
        {
            sum-=3;
        }
    }
    cout<<sum<<endl;
}

int main()
{
    //int q;cin>>q;while(q--)solve();
    solve();
}

