#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=n;
    int frr[n+5]={0};
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                frr[i]++;
                n/=i;
            }
        }
    }
    if(n>1)frr[n]++;
    for(int i=2;i<=p;i++)
    {
        if(frr[i]>0)
        {
            cout<<i<<" "<<frr[i]<<endl;
        }
    }
}
