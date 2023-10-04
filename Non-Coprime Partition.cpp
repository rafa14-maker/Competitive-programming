#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=(n*(n+1))/2;

    for(int i=2;i<=n;i++)
    {
        if(sum%i==0)
        {
            cout<<"Yes"<<endl;
            cout<<"1"<<" "<<i<<endl;
            cout<<n-1<<" ";
            for(int j=1;j<=n;j++)
            {
                if(j!=i)
                {
                    cout<<j<<" ";
                }
            }
            cout<<endl;
          return 0;
        }
    }
    cout<<"No"<<endl;
}
