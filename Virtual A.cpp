#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        long long p=a-b;
        if(k%2==0)
        {
            cout<<p*(k/2)<<endl;
        }
        else
        {
            k-=1;
            cout<<p*(k/2)+a<<endl;
        }
    }
}
