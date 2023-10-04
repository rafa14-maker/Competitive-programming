#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        while(n>9)
        {
            long long a=n;
            long long sum=0;
            while(a>0)
            {
                sum+=(a%10);
                a/=10;
            }
            n=sum;
        }
        cout<<n<<endl;
    }
}
