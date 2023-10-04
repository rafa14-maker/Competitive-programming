#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long a=n/2,b=n-a;
    if(n%k!=0)cout<<-1<<endl;
    else
    {
        while(a>0&&b<=n)
        {
            if(a%k==0&&b%k==0)
            {
                cout<<a<<" "<<b<<endl;
                return 0;
            }
           a--;
           b++;
        }
    }
}
