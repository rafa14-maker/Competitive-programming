#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,t,n;
    cin>>t;

    for(i=1;i<=t;i++)
    {
         cin>>k;
        printf("Case %d:\n",i);
        int sum=0;
        string arr;

        for(j=0;j<k;j++)
        {
            cin>>arr;
            if(arr=="donate")
            {
                cin>>n;
                sum+=n;
            }
            else
            {
                cout<<sum<<endl;
            }
        }
    }
}
