#include<bits/stdc++.h>
using namespace std;

long long frr[]={7,23,811,1087,99991,104729,4301789,10000223,999999937};

int f(long long n)
{
    int cnt=0;
    while(n>0)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;


   long long kp;
   kp=frr[c-1];

   int ck = c,ak = c;
   long long ck1 = kp,ak1 = kp;

   while(ck<a)
   {
       ck1*=2;
       ck=f(ck1);
   }

   while(ak<b)
   {
       ak1*=3;
       ak = f(ak1);
   }

   cout<<ck1<<" "<<ak1<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
