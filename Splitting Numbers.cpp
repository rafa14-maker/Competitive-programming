#include<bits/stdc++.h>
using namespace std;

const int N = 32;

int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)break;
        bitset<N>bs(n);
        bitset<N>a;
        bitset<N>b;
        int counter=0;
        for(int i=0;i<31;i++)
        {
           if(bs.test(i)==1)
           {
               counter++;
               if(counter%2==1)a[i]=1;
               else b[i]=1;
           }
        }
        int l=0,r=0;
        for(int i=0;i<32;i++)
        {
            if(a.test(i)==1)
            {
                l+=pow(2,i);
            }
        }
         for(int i=0;i<32;i++)
        {
            if(b.test(i)==1)
            {
                r+=pow(2,i);
            }
        }
        cout<<l<<" "<<r<<endl;
    }
}
