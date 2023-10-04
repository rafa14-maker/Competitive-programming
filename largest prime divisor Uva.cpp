#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    long long n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        if(n<0)n*= -1;

        ll idx = -1,counter=0;

        for(ll i=2;i*i<=n&&n!=1;i++)
        {
            while(n%i==0)
            {
                idx=i;
                n/=i;
              //  counter++;
            }
            if(idx==i)
            {
                counter++;
            }
           // counter=0;
        }

        if(n!=1&&idx!=-1)
        {
            idx = n;
        }
       else if(counter == 1)idx = -1;

        cout<<idx<<endl;
    }
}
