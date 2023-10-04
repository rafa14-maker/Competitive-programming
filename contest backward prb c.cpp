#include<bits/stdc++.h>
using namespace std;
#define max 1000000

int i,j,k,l;

bool prime[max];

void seive()
{
    for(i=2;i<max;i++)
    {
        prime[i]=true;
    }
    for(i=2;i<max;i++)
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
        if(prime[i]==true&&n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
                fac[i]++;
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
  while(cin>>k>>l){

        map<int,int>acm=factor(l);

        map<int,int>::iterator it;

        for(it=acm.begin();it!=acm.end();it++)
        {
            for(i=1;i<=k;i++)
            {
                if((i%it->first==0||it->first%i==0)&&acm[i]>0)
                {
                    acm[i]--;
                }

            }
        }
        int counter=0;
      for(it=acm.begin();it!=acm.end();it++)
        {
          if(it->second>0)
          {
              counter++;
              break;
          }
        }
        if(counter==0)
        {
             printf("%d divides %d!\n",l, k);
        }
        else
        {

printf("%d does not divide %d!\n",l,k);
        }


  }

}
