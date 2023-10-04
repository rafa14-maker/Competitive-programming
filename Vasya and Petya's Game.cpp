#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

bool prime[N];

void seive()
{
    for(int i=3;i<=N;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=3;i*i<=N;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=N;j+=i)
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
   vector<int>v;
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            int idx=i;
            int sum=1;
            while(sum<n)
            {
                sum*=idx;
             if(sum<=n)   v.push_back(sum);
            }
        }
    }


    {
       cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    }
}
