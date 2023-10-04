#include<bits/stdc++.h>
using namespace std;
#define M 1000005

int phi[M];

void tot_seive()
{
    for(int i=1;i<M;i++)
    {
        phi[i]=i;
    }
    for(int p=2;p<M;p++)
    {
        if(phi[p]==p)
        {
            for(int k=p;k<M;k+=p)
            {
                phi[k]-=phi[k]/p;
            }
        }
    }
}

int main()
{
    tot_seive();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<phi[i]<<endl;
    }
}
