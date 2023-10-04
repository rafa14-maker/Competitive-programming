#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<1<<endl<<n<<endl;
        return 0;
    }
    cout<<3<<endl;
    cout<<3<<" ";
    n-=3;
    for(int i=3;;i++)
    {
        if(isprime(i)&&isprime(n-i))
        {
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
}
