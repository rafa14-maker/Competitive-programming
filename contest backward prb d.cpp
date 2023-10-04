#include<bits/stdc++.h>
using namespace std;

map< int, int>factor( int n)
{
    map< int,int>fac;

    while(n%2==0)
    {
        fac[2]++;
        n/=2;
    }

    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            n/=i;
            fac[i]++;
        }
    }

    if(n>2)
    {
        fac[n]++;
    }

    return fac;
}
int kop(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
  int main()
  {
   int n,k,l,counter;
   cin>>n;
   while(n--)
   {
       scanf("%d%d",&k,&l);
       map<int,int>acm=factor(k);
         map<int,int>kcm=factor(l);

         map<int,int>::iterator it;

         counter=0;

     for(it=acm.begin();it!=acm.end();it++)
     {
    cout<<it->first<<":"<<it->second<<endl;

     }

   }
  }

