#include<bits/stdc++.h>
using namespace std;

const int N =1e5+5;
long long frr[N];

int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        frr[a]++;
        sum+=a;
    }
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b;
        cin>>a>>b;
        long long k=frr[a];
        frr[a]=0;
        sum-=(k*a);
        frr[b]+=k;
        sum+=(k*b);
        cout<<sum<<endl;
    }
}
