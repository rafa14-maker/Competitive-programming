#include<bits/stdc++.h>
using namespace std;
#define r1 1000000
#define m 4294967296

bool prime[r1];


void seive()
{
    for(int i=3;i<=r1;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=3;i*i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=r1;j+=i)
            {
                prime[j]=false;
            }
        }
    }

}

int main()
{
  seive();
   int n;
   cin>>n;
   int k=0;
   for(int i=0;i<=r1;i++)
   {
       if(prime[i]==true&&i>n)
       {
           k=i;
           break;
       }
   }
   cout<<k<<endl;
   for(int i=1;i<n;i++)
   {
       cout<<i<<" "<<i+1<<endl;
   }
   cout<<n<<" "<<1<<endl;
   int f=k-n;
   if(f>0){
   for(int i=1;i<n;i++)
   {
       cout<<i<<" "<<i+2<<endl;
       f--;
       if(f==0)break;
   }
   }
}

