#include<bits/stdc++.h>
using namespace std;


bool check(long long mid,long long n)
{
    long long a=n,p=0,q=0;
    while(a>0)
    {
        if(a<mid)
        {
            p+=a;
            a=0;
            break;
        }
        p+=mid;
        a-=mid;
        if(a<10)continue;
        else
        {
            q+=(a/10);
            a=(a-(a/10));
        }
    }
  //  cout<<mid<<" "<<p<<" "<<q<<endl;
   // if(p<=q)return false;
  if(p>=(n+1)/2)return true;
  return false;
}

int main()
{
   long long int n;
  cin>>n;
 // for(int n=1;n<=1000;n++){
    long long l=1,r=n;
    long long ans=n;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(check(mid,n)==true)
        {
        ans=min(ans,mid);
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
   }

