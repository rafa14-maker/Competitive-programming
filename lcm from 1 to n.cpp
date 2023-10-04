#include<bits/stdc++.h>
using namespace std;
#define r1 1000000
#define m 4294967296

bool prime[r1];
 vector<int>arr;
void seive()
{
   prime[2]=true;
   for(int i=3;i<r1;i+=2)prime[i]=true;

    for(int i=3;i*i<=r1;i+=2)
    {
        if(prime[i]==1)
        {
            for(int j=i*2;j<r1;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    arr.push_back(2);

    for(int i=3;i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            arr.push_back(i);
        }
    }

}

long long call(long long n)
{
    long long sum=1;
    for(int i=0;arr[i]<=n;i++)
    {
        long long p=n;
            int counter=0;
            while(p>=arr[i])
            {
              counter++;
                p/=arr[i];
            }
           // cout<<i<<" "<<counter<<endl;
            sum*=bigmod(arr[i],counter);
            sum=sum%m;
        }
 return sum;
    }





int main()
{
    seive();

    int n;
    long long k;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>k;
    printf("Case %d: %lld\n",i+1,call(k));
    }
}
