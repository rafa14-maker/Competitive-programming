#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1==1)
    {
        cin>>n;
        if(n==-1)return 0;
        int m=-1;
        for(int i=ceil(sqrt(n));i>=2;i--)
        {
            int a=i,k=n;
            bool ok =true;
            while(a--)
            {
               if(k%i!=1)
               {
                   ok=false;
                   break;
               }
                    k-=(k/i);
                    k--;
                  //  cout<<k<<endl;
            }
           if(!ok)continue;
        if (k%i==0){
        m=i;
        break;
        }
    }
     if(m==-1)
       {
           printf("%d coconuts, no solution\n",n);
       }
       else
       {
           printf("%d coconuts, %d people and 1 monkey\n",n,m);
       }
}
}
