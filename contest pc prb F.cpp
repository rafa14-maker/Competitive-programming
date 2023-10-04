#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,a=1,i,sum=1;
    cin>>n>>m;

    for(i=0;i<n-1;i++)
    {
        cin>>k;
        if(m==k)
           {
              sum++;
                a=max(a,sum);
           }
        else
        {
            m=k;
            sum=1;
        }
    }

    cout<<a<<endl;
}
