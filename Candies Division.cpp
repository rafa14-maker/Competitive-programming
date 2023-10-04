#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int sum =k*(n/k);
        n=n%k;
        k=k/2;
        sum+=min(k,n);
        cout<<sum<<endl;
    }
}
