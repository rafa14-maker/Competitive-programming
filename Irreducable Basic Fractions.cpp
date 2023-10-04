#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll n,ll k)
{
    if(k==0)return n;
    else return gcd(k,n%k);
}

ll lcm(ll n,ll k)
{
    ll g = gcd(n,k);
    return n/g*k;
}

void solve(ll k)
{
  //ll k;
 // cin>>k;

  ll sum=k;
  ll p=k;

  vector<int>arr;

  for(int i=2;i*i<=k;i++)
  {
      if(k%i==0)
      {
          arr.push_back(i);
          while(k%i==0)k/=i;
      }
  }

  if(k>1)arr.push_back(k);

  ll n = arr.size();

 // ll sum=

    for(int i=1;i<=pow(2,n);i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(arr[j]);
            }
        }
        if(v.size()>0){
       ll counter=v[0];
       for(int i=1;i<v.size();i++)
       {
           counter=lcm(counter,v[i]);
       }
     //  cout<<counter<<endl;
       if(v.size()%2==0)sum+=p/counter;
       else sum-=p/counter;
        }
    }
    cout<<sum<<endl;
}


int main()
{
   while(1)
   {
       ll n;
       cin>>n;
       if(n==0)break;
       else solve(n);
   }
}
