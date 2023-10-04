#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  i,j,n;

    cin>>n>>j;

    for(i=0;i<j;i++)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n-=1;
        }
    }
    cout<<n<<endl;
}
