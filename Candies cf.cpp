#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        long long k=2;
        while(1)
        {
            k*=2;
            if(n%(k-1)==0)
            {
                cout<<n/(k-1)<<"\n";
              //  return 0;
              break;
            }
        }
    }
}
