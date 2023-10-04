#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  a,n,m,k,b,j,i;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>m>>k;

        if(m>k)
        {
            a=m;
            b=k;
        }
        else
        {
            a=k;
            b=m;
        }
        int counter=0;

        for(j=1;j<=b;j++)
        {
            if(m%j==0&&k%j==0)
            {
                counter++;

            }
        }

        cout<<counter<<endl;

    }
}
