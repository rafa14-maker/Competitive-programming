#include<bits/stdc++.h>
using namespace std;

int frr[105];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=i;
        for(int j=2;j<=n;j++)
        {
            while(a%j==0)
            {
                frr[j]++;
                a/=j;
            }
        }
    }
    for(int i=1;i<=100;i++)
    {
        if(frr[i]>0)cout<<i<<" "<<frr[i]<<endl;
    }
}
