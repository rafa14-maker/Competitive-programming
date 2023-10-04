#include<bits/stdc++.h>
using namespace std;

const long long N = 1e6+5;

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        long long n;
        scanf("%lld",&n);
      //  cout<<n<<endl;
        int counter=0;
        for(int i=0;i<=N;i++)
        {
            if(i*i>n)break;
            if(i*i==n||i*i+1==n||i*i==n-(i*i))
            {
                counter++;
                break;
            }
             else
             {
                 long long p=n-(i*i);
                 long long l=0,r=N;
                 while(l<=r)
                 {
                     long long mid=(l+r)/2;
                     if(mid*mid==p)
                     {
                         counter++;
                         break;
                     }
                     else if(mid*mid<p)
                     {
                         l=mid+1;
                     }
                     else
                     {
                         r=mid-1;
                     }
                 }
                 if(counter>0)break;
             }
        }
        if(counter==0)printf("No\n");
        else printf("Yes\n");
    }
}
