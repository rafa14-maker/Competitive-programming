#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

bool prime[N];

vector<int>pri;

void seive()
{
    for(int i=2;i<=N;i++)prime[i]=true;
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=N;i++)if(prime[i])pri.push_back(i);
}
bool check(int n,int m)
{
    for(int i=0;i<pri.size()&&pri[i]*pri[i]<=m;i++)
    {
       if(m%pri[i]==0)
       {
           int counter=0;
           while(m%pri[i]==0)
           {
               counter++;
               m/=pri[i];
           }
           long long tmp=pri[i],sum=0;
           while(tmp<=n)
           {
             sum+=n/tmp;
             tmp*=pri[i];
           }
           if(counter>sum)return 0;
       }
    }
    if(m!=1)if(n<m)return 0;
    return 1;
}

int main()
{
    seive();
   int n,m;
   while(scanf("%d %d",&n,&m)!=EOF)
   {
       if(check(n,m))printf("%d divides %d!\n",m,n);
       else printf("%d does not divide %d!\n",m,n);
   }
}
