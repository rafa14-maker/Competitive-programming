#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

ll male[55],female[55];

void f()
{
    male[0]=0;
    male[1]=1;
    female[0]=1;
    female[1]=1;
    male[2]=female[2]=2;
    for(int i=3;i<=50;i++)
    {
        male[i] = male[i-1] + male[i-2]+1;
        female[i] = female[i-1]+female[i-2];
    }
}

int n;

void solve()
{
    printf("%lld %lld\n",male[n],male[n]+female[n]);
}

int main()
{
    f();
   while(1)
   {
       cin>>n;
       if(n== -1)break;
       solve();
   }
}
