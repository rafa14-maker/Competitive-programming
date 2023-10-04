#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int i=1;
    while(1==1)
    {
        if((k*i)%10==0||(k*i)%10==r)
        {
            cout<<i<<endl;
            return 0;
        }
        i++;
    }
}
