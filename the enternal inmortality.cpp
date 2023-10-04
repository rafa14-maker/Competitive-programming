#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);

    if(b-a>=10)
    {
        cout<<0<<endl;
        return 0;
    }

    long long sum=1;

    for(long long i=a+1;i<=b;i++)
    {
        sum=(sum*(i%10))%10;
    }
    cout<<sum<<endl;
}
