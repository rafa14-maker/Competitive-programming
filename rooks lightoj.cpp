#include<bits/stdc++.h>
using namespace std;
const long long int N =1e17;
int main()
{
    int q;
    cin>>q;
    for(int u=1;u<=q;u++)
    {
        int n,k;
        cin>>n>>k;
        if(n<k)  printf("Case %d: 0\n",u);
        else
        {
           unsigned long long int sum=1,p=n;
            for(int i=1;i<=k;i++)
            {
                sum=sum*p*p/i;
                p--;
            }
            printf("Case %d: %llu\n",u,sum);
        }
    }
}


