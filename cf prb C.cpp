#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long i,n,j=1,a,k,sum;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;

        j=1;

        sum=0;

        for(k=1;k<=a/4;k++)
        {
            if(k==j)
            {
                sum-=k;
                j*=2;
            }
            else
            {
                sum+=k;
            }
        }
        sum=sum*3;
        cout<<sum<<endl;
    }
}
