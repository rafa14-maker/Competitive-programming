#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,i,counter=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>p>>q;

        if(p+1<q)
        {
            counter++;
        }
    }

    cout<<counter<<endl;

}
