#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        int counter=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                counter+=__gcd(i,j);
            }
        }
         cout<<counter<<endl;
    }

}
