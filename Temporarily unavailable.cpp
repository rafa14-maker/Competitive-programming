#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,c,k;
        cin>>a>>b>>c>>k;
        if(a>b)swap(a,b);

        int sum=(b-a)+1;
        long long l=c-k;
         long long r=c+k;
         long long counter=0;
         if(l>=a&&l<=b)counter+=l-a;
        if(l!=r) if(r>=a&&r<=b)counter+=(b-r);
         cout<<counter<<endl;
    }
}
