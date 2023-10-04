#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long n;
   cin>>n;
   if(n<=6)cout<<15<<endl;
   else if(n<=8)cout<<20<<endl;
   else if(n<=10)cout<<25<<endl;
   else
   {
       long long k = n/6;

       long long p = n%6;

       if(p==0)
       {
           cout<<k*15<<endl;
           return ;
       }
       long long sum=0;
       if(p>0&&p<=2)sum+=20,k-=1;
       else if(p>0&&p<=4)sum+=25,k-=1;
       else if(p==5) k++;

      // cout<<k<<" "<<sum<<endl;

       cout<<k*15 +sum<<endl;
   }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
