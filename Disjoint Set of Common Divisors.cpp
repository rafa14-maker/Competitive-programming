#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

int main()
{
    long long a,b;
    cin>>a>>b;

    long long k=gcd(a,b);

    vector<long long>v;

    for(int i=2;i<=sqrt(k);i++)
    {
        if(k%i==0)
        {
            v.push_back(i);
            while(k%i==0)
            {
                k/=i;
            }
        }
    }

    if(k>2)
    {
        v.push_back(k);
    }

    cout<<v.size()+1<<endl;
}
