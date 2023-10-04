#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,i,k,p,sum,found;

    cin>>a>>b;

    for(i=a;i<=b;i++)
    {
        if(i%2!=0){

            k=i*i;

            p=k;
            k=i;
            sum=0;
            found=0;
            while(p>0)
            {
                sum+=(p%10);
                p/=10;
            }
            while(k>0)
            {
                found+=(k%10);
                k/=10;
            }
            if(sum==found)
            {
                cout<<i<<" ";
            }
        }
    }
}
