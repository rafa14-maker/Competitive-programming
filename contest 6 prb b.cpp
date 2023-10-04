#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,counter=1,i=1,l;

    cin>>k>>r;



    while(1==1)
    {
        l=k*i;

        if(l%10==0||l%10==r)
        {
            cout<<i<<endl;
            return 0;
        }
        i++;

    }
}
