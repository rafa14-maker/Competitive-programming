#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,i=1,sum=0,w=0;
    cin>>a;
  // if(a<0)a*=(-1),w++;
    while(1==1)
    {
        int b=a+i,k=0;
        if(b<0)b*=(-1);
        while(b>0)
        {
           int r=b%10;
           if(r==8)
           {
               k++;
               break;
           }
            b/=10;
        }
        if(k>0)break;
        i++;
    }
   // if(w==0)cout<<i<<endl;
    cout<<i<<endl;
}
