#include<bits/stdc++.h>
using namespace std;

long long max1(long long a,long long b)
{
    if(a>=b)return a;
    else return b;
}

int main()
{
    long long n;
    cin>>n;

    long long flag=0;

    vector<long long>v;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
      if(n/i==i)v.push_back(i);
      else v.push_back(n/i),v.push_back(i);
         //  break;
        }
    }
     v.push_back(n);
  //  for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
 //  long long flag=0;
  sort(v.begin(),v.end());

  for(int i=0;i<v.size();i++)
  {
      for(int j=i+1;j<v.size();j++){
      if(__gcd(v[i],v[j])==1)
      {
         // cout<<i<<" "<<i+1;
          flag++;
          break;
      }
      }
  }

  if(v.size()==1||flag>0)cout<<n<<endl;
  else cout<<v[0]<<endl;

}
