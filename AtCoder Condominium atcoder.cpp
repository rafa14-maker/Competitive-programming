#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            int r = i*100+j;
            sum+=r;
        }
    }
    cout<<sum<<endl;
}
