#include<bits/stdc++.h>
using namespace std;

const long long N=1e7+5;

long long frr[N],n,m,x;

long long ans[N];

bool prime[N];

void seive()
{

    for(long long i = 2 ; i < N ; i++)
    {
        if(prime[i])continue;
        ans[i] += frr[i];
        for(long long j = i+i ; j < N ; j+=i)
        {
            prime[j] = 1;
            ans[i] += frr[j];
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

   cin>>n;

   for(int i=0;i<n;i++)cin>>x,frr[x]++;

   seive();

   for(int i=1;i<N;i++)ans[i]+=ans[i-1];

   cin>>m;

   while(m--)
   {
       long long l,r;
       cin>>l>>r;

       cout<<ans[min(r,N-5)]-ans[min(l-1,N-6)]<<endl;
   }


}
