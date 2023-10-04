#include<bits/stdc++.h>
#define max 1000000
using namespace std;

bool prime[max];

int i,j,k,a,b;

void seive()
{
    for(i=2;i<max;i++)
    {
        prime[i]=true;
    }

    for(i=2;i*i<max;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

map<int,int>factors(int n)
{
   map<int,int>fac;

   while(n%2==0)
   {
       fac[2]++;
        n/=2;
   }
    k=sqrt(n);
   for(i=3;i<=k;i+=2)
   {
       if(prime[i]==true&&n%i==0)
       {
           while(n%i==0)
           {
               fac[i]++;
                n/=i;
           }
       }
   }
   if(n>2)
   {
       fac[n]++;
   }

   return fac;
}

int main()
{
    seive();
     int n;
    cin>>n;

    while(n--)
    {
       cin>>a>>b;

       if(b%a!=0)
       {
           cout<<"NO SOLUTION"<<endl;
       }
       else{
        int ans=1;
        map<int,int>acm=factors(b);
        map<int,int>cam=factors(a);

        map<int,int>::iterator it;

        for(it=acm.begin();it!=acm.end();it++)
        {
            if(cam[it->first]!=it->second)
            {
                ans*=pow(it->first,it->second);
            }
        }
        cout<<ans<<endl;
       }

    }

  }
