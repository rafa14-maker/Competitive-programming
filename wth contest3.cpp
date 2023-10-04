#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,p,i,counter,j,op=0,k;

    cin>>t;

    int arr[20];

    for(i=0;i<t;i++)
    {
        cin>>d>>p;
        counter=0;
        if(d<0)
        {
            cout<<0<<endl;
            break;
        }
        for(j=1;j<=p;j++)
        {
            if(p%j==0)
            {
                arr[op]=j;
                op++;
            }
        }
        for(j=0;j<op;j++)
        {
            for(k=0;k<op;k++)
            {
                if((arr[k]-arr[j])==d)
            {
                counter++;
            }
            }
        }
       cout<<counter<<endl;

    }
}
