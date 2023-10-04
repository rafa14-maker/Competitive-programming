#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0,found=0,k,n,i,m=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>k;

        if(k==1)
        {
            counter=0;
            found++;
        }
        else if(k==0)
        {
            counter++;
            m=max(m,counter);
        }

    }
    cout<<found+m<<endl;
}
