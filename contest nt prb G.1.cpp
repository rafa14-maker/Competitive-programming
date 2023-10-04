#include<bits/stdc++.h>
using namespace std;

#define max 1000000

bool prime[max];

long long i,j;

void seive()
{
    memset(prime,true,max);

    for(i=2;i*i<max;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

int main()
{
    seive();

    int n,a,b,p,k,l,m,s;

    cin>>n;

    for(s=0;s<n;s++)
    {
        int counter=0;
        cin>>a>>b;
        if(a>=b)
        {
            l=b;
            k=a;
        }
        else{
            l=a;
            k=b;
        }
        for(m=2;m<=l;m++)
        {
           if(prime[m]==true&&a%m==0&&b%m==0)
           {
               counter++;
            cout<<m<<endl;
           }
        }
        if(k%l==0)
        {
           cout<<counter*2+1+1<<endl;
        }
        else{
         cout<<counter*2+1<<endl;
        }
    }

}

