#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,i,j,counter=1,a,k;

    cin>>n>>c>>j;

    a=j;

    for(i=0;i<n-1;i++)
    {
        cin>>k;

        if(a==0)
        {
            counter++;
            a=k;
        }
        else if(k-a<=c)
        {
            counter++;
            a=k;
        }
        else if(k-a>c)
        {
            counter=0;
            a=0;
        }

    }
cout<<counter<<endl;
}
