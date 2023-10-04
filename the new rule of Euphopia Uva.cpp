#include<bits/stdc++.h>
using namespace std;

const int N = 1000111;
bool prime[N];
vector<int>vk;

void seive()
{
    for(int i=2;i*i<N;i++)
    {
        if(!prime[i])
        {
            //vk.push_back(i);
            for(int j=i*i;j<N;j+=i<<1)
            {
                prime[j]=true;
            }
        }
    }
    vk.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(!prime[i])
        {
            vk.push_back(i);
        }
    }
}

void solve(int n,int test)
{
    long long ans=0;
    for(int i=0;i<vk.size();i++)
    {
        int a=vk[i];
        int l=i+1,r=vk.size()-1;
        long long res=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(vk[mid]+a<=n)
            {
            res=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
       if(res!=0) ans+=res-i;
    }
    printf("Case %d: ",test);
    cout<<ans<<endl;
}

int main()
{
   seive();
   int n,test=0;
   while(1)
   {
       cin>>n;
       if(n==0)break;
       solve( n,++test);
   }
}
