#include<bits/stdc++.h>
using namespace std;

long long p,n;

void f(int pos,long long sum1,long long sum2,int cn1,int cn2)
{
    if(pos>n)
    {
     //   cout<<p<<" "<<sum1<<" "<<sum2<<endl;
      if(cn1==cn2)  p=min(p,abs(sum1-sum2));
        return ;
    }
    f(pos+1,sum1+pow(2,pos),sum2,cn1+1,cn2);
    f(pos+1,sum1,sum2+pow(2,pos),cn1,cn2+1);
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       // long long n;
        cin>>n;
        p=1e15;
        f(1,0,0,0,0);
        cout<<p<<endl;
    }
}
