#include<bits/stdc++.h>
using namespace std;

int i,j,k;

map<int,int>factor(int n)
{
    map<int,int>fac;
    while(n%2==0)
    {
        n/=2;
        fac[2]++;
    }
    for(i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0){
        n/=i;
        fac[i]++;}
    }

    if(n>2)
    {
        fac[n]++;
    }

    return fac;
}

int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);

        if(b%a!=0)
        {
            printf("NO SOLUTION\n");
        }
        else
        {
            map<int,int>acm=factor(a);
             map<int,int>kcm=factor(b);

             map<int,int>::iterator it;

             long long ans=1;

             for(it=kcm.begin();it!=kcm.end();it++)
             {
                 if(it->second!=acm[it->first])
                 {
                     ans*=pow(it->first,it->second);
                 }
             }
             printf("%lld\n",ans);
        }
    }
}
