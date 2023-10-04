#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long x,y;
        scanf("%lld %lld",&x,&y);
       if(x>=y)cout<<"YES"<<endl;
      else { long long p=x;
            while(x>0)
       {
           if(x%2==0)x=(3*x)/2;
           else x-=1;
           if(x>=y)break;
            if(x==p)break;
       }
       if(x>=y)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
      }
    }
}
